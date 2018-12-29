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

//@Input: Tre numeri, rappresentanti i lati di un triangolo.
//@Output: Una stringa che dice se il triangolo è isoscele o scaleno
int exec_tipotriangolo() {
  float lati[3];
  int status; // Variabile rappresentante lo stato - 0 => Scaleno; 1 =>
              // Isoscele; 2+ => Equilatero
  // Ciclo principale
  while (true) {

    // Ciclo di Input
    for (int i = 0; i < 3; i++) {
      // Ciclo di Sanitizzazione degli Input
      while (true) {
        printf("Inserisci il lato numero %d: ", i + 1);
        scanf("%f", &lati[i]);

        // Sanitizzazione dei Numeri Negativi
        if (lati[i] <= 0) {
          printf("Un lato di un triangolo non può che essere positivo e "
                 "maggiore di zero!\n");
          continue;
        }

        // Uscita dal Ciclo
        break;
      }

      printf("\n\n");
    }

    // Sanitizzazione dei tre lati
    if (lati[0] + lati[1] < lati[2] || lati[1] + lati[2] < lati[0] ||
        lati[0] + lati[2] < lati[1]) {
      printf(
          "Nessun lato può essere maggiore della somma degli altri due!\n\n");
      continue;
    }

    // Uscita dal Ciclo
    break;
  }

  // Calcolo dell'Output
  status = 0;
  if (lati[0] == lati[1])
    status++;
  if (lati[1] == lati[2])
    status++;
  if (lati[0] == lati[2])
    status++;

  // Output
  switch (status) {
  case 0:
    printf("Il triangolo è scaleno.\n\n");
    break;
  case 1:
    printf("Il triangolo è isoscele.\n\n");
    break;
  default:
    printf("Il triangolo è equilatero.\n\n");
    break;
  }

  return (SUCCESS);
}
