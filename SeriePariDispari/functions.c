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

//@Input: Una serie di numeri.
//@Output: Il numero di numeri pari, dispari e nulli.
int exec_serieparidispari(void) {
  // Dichiarazione delle Variabili
  int numeroDiNumeriInteri, i, corrente;
  int pos, neg, noitro;

  // Inizializzazione delle Variabili
  pos = 0;
  neg = 0;
  noitro = 0;

  // Input del numero di numeri interi
  printf("Inserire il numero di numeri interi della serie: ");
  scanf("%d", &numeroDiNumeriInteri);

  // Input dei numeri
  for (i = 0; i < numeroDiNumeriInteri; i++) {
    printf("Inserisci il numero %d: ", i + 1);
    scanf("%d", &corrente);
    if (corrente == 0)
      noitro++;
    if (corrente > 0)
      pos++;
    if (corrente < 0)
      neg++;
  }

  // Output
  printf("\nPositivi: %d\nNegativi:%d\nNeutri:%d\n", pos, neg, noitro);
  return (SUCCESS);
}
