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

//@Input: Un numero di 5 cifre
//@Output: Le sue cifre, separate da 3 spazi
int main() {
  // Dichirazione delle Variabili
  int numero;
  int cifre[5]; /*AVVISO AI NOVIZI: Si potrebbe usare cinque variabili chiamate
                  c1, c2, c3, c4 e c5. Questo altro non è che un modo rapido di
                  fare una cosa simile*/
  int current, next;

  // Ciclo di Input
  while (true) {
    printf("Inserire un numero di 5 cifre: ");
    scanf("%d", &numero);
    if (numero > 99999) {
      printf("Il numero deve contenere massimo 5 cifre!\n");
      continue;
    }
    break;
  }

  // Convertiamo il numero nel suo valore assoluto, poichè ci interessano le
  // cifre e non il segno
  if (numero < 0) {
    numero = -numero;
  }

  // Estrapolazione delle cifre singole -  Utilizzando cinque variabili chiamate
  // c1, c2, c3, c4 e c5, non si può utilizzare un for, ma si deve effettuare
  // manualmente ogni iterazione.
  current = 1;
  for (int i = 0; i < 5; i++) {
    next = current * 10;
    cifre[i] = ((numero % next) - (numero % current)) / current;
    current = next;
  }

  // Output
  printf("Il numero è composto dalle seguenti cifre: %d   %d   %d   %d   %d\n",
         cifre[4], cifre[3], cifre[2], cifre[1], cifre[0]);
}
