#include <menu.h>
#include <curses.h>
#include "maincludes.h"
#include "common.h"

#define CTRLD 	4


void initCurses(){
  initscr();
  start_color();
  cbreak();
  noecho();
  keypad(stdscr, TRUE);
  init_pair(1, COLOR_RED, COLOR_BLACK);
}

void print_in_middle(WINDOW *win, int starty, int startx, int width, char *string, chtype color){
  int length, x, y;
	float temp;

	if(win == NULL)
		win = stdscr;
	getyx(win, y, x);
	if(startx != 0)
		x = startx;
	if(starty != 0)
		y = starty;
	if(width == 0)
		width = 80;

	length = strlen(string);
	temp = (width - length)/ 2;
	x = startx + (int)temp;
	wattron(win, color);
	mvwprintw(win, y, x, "%s", string);
	wattroff(win, color);
	refresh();
}

int main(){
  ITEM **items;
  MENU *menu;
  WINDOW *finestraMenu;
  int numScelte, i, c, selected;
  selected=0;
  initCurses();

  // Creiamo la lista di scelte
  numScelte = DIMENSIONI(programmi);
  items = (ITEM **)calloc(numScelte, sizeof(ITEM *));
  for(i = 0; i < numScelte; ++i)
        items[i] = new_item(programmi[i], descrizioni[i]);

  // Questo è il menu
  menu = new_menu((ITEM **)items);

  // Questa la finestra
  finestraMenu = newwin(getmaxy(stdscr) - 8, getmaxx(stdscr)-14, 4, 7);
  keypad(finestraMenu, true);
  set_menu_win(menu, finestraMenu);
  set_menu_sub(menu, derwin(finestraMenu, getmaxy(finestraMenu)-4, getmaxx(finestraMenu)-4, 3, 1));
  set_menu_format(menu, getmaxy(finestraMenu)-4, 1);
  set_menu_mark(menu, " * ");

  // Decorazioni varie
  box(finestraMenu, 0, 0);
  print_in_middle(finestraMenu, 1, 0, getmaxx(stdscr)-14, "Seleziona un programma da avviare", COLOR_PAIR(1));
  mvwaddch(finestraMenu, 2, 0, ACS_LTEE);
  mvwhline(finestraMenu, 2, 1, ACS_HLINE, getmaxx(finestraMenu)-2);
  mvwaddch(finestraMenu, 2, getmaxx(finestraMenu)-1, ACS_RTEE);
  mvprintw(LINES - 2, 0, "Premi F1 per uscire");
  refresh();
  post_menu(menu);
	wrefresh(finestraMenu);

  // E ora, cose da menu
  bool interruptMenu = false;
  while(!interruptMenu) {
    c = wgetch(finestraMenu);
    switch(c){
      case KEY_F(1):
        selected = -1;
        interruptMenu = true;
        break;
      case KEY_DOWN:
        menu_driver(menu, REQ_DOWN_ITEM);
        if (selected<DIMENSIONI(programmi)-2){
          selected++;
        }
        break;
      case KEY_UP:
        menu_driver(menu, REQ_UP_ITEM);
        if(selected>0){
          selected--;
        }
        break;
      case 10:
        interruptMenu = true;
        break;
    }
    wrefresh(finestraMenu);
  }
  unpost_menu(menu);
  free_menu(menu);
  nocbreak();
  echo();
  endwin();
  fflush(stdout);
  if (selected < 0) return(SUCCESS);
  printf("%s - %s\n", programmi[selected], descrizioni[selected]);
  return esegui(programmi[selected]);
}
