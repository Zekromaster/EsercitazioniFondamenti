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
#include <math.h>

int cinquenumeri_somma(int* v){
  int s = 0;
  for (int i = 0; i < 5; i++){
    s += v[i];
  }
  return s;
}

int cinquenumeri_media(int* v){
  return cinquenumeri_somma(v)/5;
}

//@Input: Cinque numeri
//@Output: Media, somma e radice quadrata della sommma
int exec_cinquenumeri() {
  int numeri[5];
  for (int i = 0; i < 5; i++){
    printf("Inserisci il numero %d: ", i);
    scanf("%d", &numeri[i]);
  }
  printf("La somma e' %d\n\
          La media e' %d\n\
          La radice della somma e' %.2f\n",
          cinquenumeri_somma(numeri),
          cinquenumeri_media(numeri),
          sqrt(cinquenumeri_somma(numeri))
        );
  return (SUCCESS);
}
