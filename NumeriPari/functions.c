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

//@Input: Un numero
//@Output: Tutti i numeri pari precedenti
int exec_numeripari() {
  // Dichiarazione delle Variabili
  int n;
  printf("Inserire un numero: ");
  scanf("%d", &n);
  if (n < 1) return (SUCCESS);
  if (n % 2 != 0) n++;
  for (int i = 0; i <= n-1; i = i+2){
    printf("%d\n", i);
  }
  return (SUCCESS);
}
