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
int exec_triangolostellato(void) {
  int n;
  printf("Inserire l'altezza del triangolo: ");
  scanf("%d", &n);
  if (n < 1) return (SUCCESS);
  for (int i = 1; i <= n; i++){
    for (int j = 0; j < i; j++){
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
  return (SUCCESS);
}
