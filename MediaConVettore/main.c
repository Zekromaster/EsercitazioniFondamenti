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

//@Input: Il numero di interi in una lista e la lista stessa degli interi.
//@Output: La media di tutti gli elementi.
int main(){
  // Dichiarazione delle variabili
  int dim;
  float media;
  int numeri[65535];

  // Input del numero di numeri - con ciclo di controllo
  while (true){
    printf("Inserire il numero di elementi della serie: ");
    scanf("%d", &dim);
    if (dim > 0){
      break;
    }
    printf("Il numero di elementi deve essere maggiore di 0!\n");
  }

  // Richiesta degli elementi
  for (int i = 0; i < dim; i++){
    printf("Inserire l'elemento numero %d: ", i+1);
    scanf("%d", &numeri[i]);
  }

  // Calcolo della media
  media = 0;
  for (int i = 0; i < dim; i++){
    media = media + numeri[i];
  }
  media = media/dim;

  // Output
  printf("\nLa media è %.2f\n", media);

  return SUCCESS;
}
