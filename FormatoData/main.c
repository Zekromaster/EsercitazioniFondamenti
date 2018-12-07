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

//@Input: Giorno, mese e anno di nascita
//@Output: Una stringa del formato gg/mm/aaaa, o un errore se la data è
// impossibile
int main() {
  // Dichiarazione delle Variabili
  int giorno, mese, anno;
  // Ciclo principale - da questo si uscirà solo quando l'input sarà corretto e
  // semanticamente sensato
  while (true) {
    // Input
    printf("Inserisci il giorno in cui sei nato in formato numerico: ");
    scanf("%d", &giorno);
    printf("Inserisci il mese in cui sei nato in formato numerico: ");
    scanf("%d", &mese);
    printf("Inserisci l'anno in cui sei nato in formato numerico: ");
    scanf("%d", &anno);

    // Sanitizzazione - Controlliamo se il mese e il giorno avrebbero senso
    if (mese >= 13 || mese <= 0 || giorno >= 32 || giorno <= 0) {
      printf("L'input inserito non ha senso - inserire dati corretti!\n");
      continue;
    }

    // Sanitizzazione - Controlliamo se il numero di giorni di febbraio è
    // coerente. Ciò viene fatto a parte perchè ha una logica particolarmente
    // complessa rispetto al resto.
    if (mese == 2 && giorno > 29) {
      printf("Febbraio può avere al più 29 giorni!\n");
      continue;
    } else if (mese == 2 && giorno == 29) {
      // Controlliamo la bisestilità
      if (!((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0)) {
        printf("Il %d non è bisestile!\n", anno);
        continue;
      }
    }

    // Sanitizzazione del resto dell'anno
    if (giorno == 31 && (mese == 4 || mese == 6 || mese == 9 || mese == 11)) {
      printf("Trenta giorni a novembre, con aprile, giugno e settembre!\n");
      continue;
    }

    // Fine del ciclo
    break;
  }
  printf("La tua data di nascita è: %02d / %02d / %04d.\n", giorno, mese, anno);
  return (SUCCESS);
}
