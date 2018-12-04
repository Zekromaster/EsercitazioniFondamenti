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
#include <math.h>

//@Input: Base e Altezza di un rettangolo
//@Output: Perimetro, area e diagonale dello stesso
int main(){
  // Dichiarazione delle variabili
  float b, h;
  float perimetro, area, diagonale;

  // Acquisizione base - con ciclo per verifica errori
  while (true){
    printf("Inserire base del rettangolo: ");
    scanf("%f", &b);
    if (b <= 0){
      printf("Le dimensioni devono essere positive!");
      continue;
    }
    break;
  }

  // Acquisizione altezza - come sopra
  while (true){
    printf("Inserire altezza del rettangolo: ");
    scanf("%f", &h);
    if (h <= 0){
      printf("Le dimensioni devono essere positive!");
      continue;
    }
    break;
  }

  // Calcolo del perimetro
  perimetro = 2*(b+h);

  // Calcolo dell'area
  area = (b*h);

  // Calcolo della diagonale
  diagonale = sqrt(b*b + h*h);

  // Output
  printf("Perimetro: %.2f\nArea: %.2f\nDiagonale: %.2f\n", perimetro, area, diagonale);

  // Fine
  return(SUCCESS);
}
