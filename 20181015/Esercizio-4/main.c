/*  This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#include "../../definitions.h"

//@Input: Una coppia di mese ed anno nel formato mese/anno
//@Output: Il mese successivo
int main(){
  // Dichiarazione delle Variabili
  int mese, anno;

  // Ciclo principale - da questo si uscirà solo quando l'input sarà corretto e semanticamente sensato
  while (true){
    // Input
    printf("Inserisci mese ed anno (nel formato \"mese\\anno\"): ");
    scanf("%d\\%d", &mese, &anno);

    // Sanitizzazione
    if (mese > 12 || mese == 0){
      printf("Il mese non può essere oltre il 12 o uguale a 0! Cosa sei, marziano?\n");
      continue;
    }

    // Uscita dal Ciclo
    break;
  }

  // Calcolo del mese successivo
  anno = anno + (mese/12);
  mese = (mese % 12) + 1;

  // Output
  printf("Il mese successivo è il %d\\%d\n", mese, anno);

}
