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

//@Input: Una serie di numeri. Lo zero funge da sentinella.
//@Output: La media degli stessi.
int main(){
  // Dichiarazione delle Variabili
  int i;
  float numero, media, somma;

  // Inizializzazione delle Variabili
  somma = 0;
  numero = 1;
  i = 0;

  // Input
  do{
    printf("Inserisci un numero: ");
    scanf("%f", &numero);
    somma += numero;
    if (numero!=0) i++;
  }while(numero!=0);

  // Calcolo della Media
  media = somma/i;

  // Output
  printf("\nLa media è %.3f\n", media);
  return(SUCCESS);
}
