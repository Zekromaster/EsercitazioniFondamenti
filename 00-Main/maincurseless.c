// Copyright (c) 2018 Zekromaster
//
// GNU GENERAL PUBLIC LICENSE
//    Version 3, 29 June 2007
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "../definitions.h"
#include "maincludes.h"
#include "common.h"

int main(){
  int selected = -1;
  printf("Seleziona cosa vuoi avviare, inserisci -1 per uscire senza avviare nulla!\n\n");
  for (int i = 0; i<DIMENSIONI(programmi)-1; i++){
    printf ("%d) %s - %s\n", i, programmi[i], descrizioni[i]);
  }
  printf("Inserisci: ");
  scanf("%d", &selected);
  if (selected < 0 || selected > DIMENSIONI(programmi) - 2) return (SUCCESS);
  printf("\n\n%s - %s\n\n", programmi[selected], descrizioni[selected]);
  return esegui(programmi[selected]);
}
