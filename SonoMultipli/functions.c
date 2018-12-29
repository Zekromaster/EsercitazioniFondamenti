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

//@Input: Due numeri
//@Output: Se i due numeri sono multipli l'uno dell'altro
int exec_sonomultipli() {

  // Dichiarazione delle Variabili
  int numeri[2];
  bool outputDone = false;

  // Input
  printf("Inserisci due numeri, separati da un trattino, nel formato N/N: ");
  scanf("%d/%d", &numeri[0], &numeri[1]);

  // Output
  if ((numeri[0] > numeri[1]) && (numeri[0] % numeri[1] == 0)) {
    printf("%d è multiplo di %d\n\n\n", numeri[0], numeri[1]);
    outputDone = true;
  }
  if ((numeri[1] > numeri[0]) && (numeri[1] % numeri[0] == 0)) {
    printf("%d è multiplo di %d\n\n\n", numeri[1], numeri[0]);
    outputDone = true;
  }
  if (numeri[1] == numeri[0]) {
    printf("%d e %d sono uguali!\n\n\n", numeri[1], numeri[0]);
    outputDone = true;
  }

  if (outputDone == false) {
    printf("%d non è multiplo di %d, nè viceversa.\n", numeri[0], numeri[1]);
  }

  return (SUCCESS);
}
