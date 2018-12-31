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

//@Input: Un numero, cifra per cifra, binario
//@Output: Il numero decimale
int exec_convertibinario(void){
  int numero, i, contatoreMax;
  numero = 0;
  printf("Di quante cifre si compone il numero? ");
  scanf("%d", &contatoreMax);
  printf("Il programma chiederà ora le cifre a partire da quella meno significativa (quella\
  più a destra)\n");
  for (i = 0; i < contatoreMax; i++){
    int tmp;
    printf("Inserire la cifra %d: ", i);
    scanf("%d", &tmp);
    if (!(tmp == 0 || tmp == 1)){
      printf("Inserire una cifra valida!\n");
      i--;
      continue;
    }
    tmp = pow(2, i)*tmp;
    printf("Aggiunta di %d al numero.\n", tmp);
    numero+=tmp;
  }
  printf("Il numero binario inserito ha un valore decimale di %d\n", numero);
  return (SUCCESS);
}
