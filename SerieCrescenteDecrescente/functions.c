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

bool crescenza, decrescenza;

void togglaCrescenza(){
  decrescenza = false;
  if (crescenza != false) crescenza = true;
}

void togglaDecrescenza(){
  crescenza = false;
  if (decrescenza != false) decrescenza = true;
}


//@Input: Una serie di numeri.
//@Output: Il numero di numeri positivi, negativi e nulli.
int exec_seriecrescentedecrescente(void) {
  // Dichiarazione delle Variabili
  bool valLaPenaCalcolare;
  int numeroDiNumeriInteri, i;
  int serie[2];
  // Inizializzazione
  valLaPenaCalcolare = true;
  crescenza = true;
  decrescenza = true;

  // Input del numero di numeri interi
  printf("Inserire il numero di numeri interi della serie: ");
  scanf("%d", &numeroDiNumeriInteri);

  // Input dei numeri
  for (i = 0; i < numeroDiNumeriInteri; i++) {
    printf("Inserisci il numero %d: ", i + 1);
    scanf("%d", &serie[1]);
    if (i != 0 && valLaPenaCalcolare){
      if (serie[1] > serie[0]){
        togglaCrescenza();
      }else{
        togglaDecrescenza();
      }
      if (serie[1] == serie[0]){
        crescenza = false;
        decrescenza = false;
      }
    }
    serie[0] = serie[1];
    if (!crescenza && !decrescenza) valLaPenaCalcolare = false; // Se si sono confermate false sia crescenza che decrescenza, a che serve?
  }

  // Output
  if (crescenza){
    printf("La serie è crescente\n");
  }else if (decrescenza){
    printf("La serie è decrescente\n");
  }else{
    printf("La serie non è ne crescente nè decrescente\n");
  }
  return (SUCCESS);
}
