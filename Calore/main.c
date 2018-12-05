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

#include "../definitions.h"

//@Input: Una temperatura, in gradi celsius
//@Output: Un'espressione empirica del suo effetto
int main() {
  // Dichiarazione delle Variabili
  int temperatura;

  // Input
  printf("Inserisci la temperatura corrente in gradi Celsius: ");
  scanf("%d", &temperatura);
  printf("\n");

  // Output
  if (temperatura > 30) {
    printf("Molto caldo! Non stare a sentire a nonna, la giacchetta non "
           "metterla.");
  }
  if (temperatura <= 0) {
    printf("Molto freddo! Dici ad Abdelaziz Rhandi che forse è il caso di "
           "sospendere le lezioni!");
  }
  if (temperatura > 20 && temperatura <= 30) {
    printf("Caldo.");
  }
  if (temperatura > 10 && temperatura <= 20) {
    printf("Gradevole. Cioè, almeno per me. È un fattore soggettivo.");
  }
  if (temperatura > 0 && temperatura <= 10) {
    printf("Freddo. Mettiti una sciarpa.");
  }
  printf("\n");
  return (SUCCESS);
}
