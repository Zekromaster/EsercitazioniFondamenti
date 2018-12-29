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

void ordinarearray_leggiFile(int vettore[VECTOR_SIZE], int * lunghezza){
  char fileName[VECTOR_SIZE];
  FILE * file;
  int i = 0;
  printf("Inserisci il file dove si trova il vettore: ");
  scanf("%s", fileName);
  file = fopen(fileName, "r");
  if (file == NULL){
    printf("Errore nell'apertura di %s: java.lang.NullPointerException.\n", fileName);
    exit(ENOENT);
  }
  for (;i < VECTOR_SIZE && !feof(file); i++) {
    fscanf(file, "%d ", &vettore[i]);
  }
  fclose(file);
  *lunghezza = i+1;
}

int ordinarearray_minimo(int vettore[VECTOR_SIZE], int iPartenza, int lunghezza){
  int min = vettore[iPartenza];
  for (int i = iPartenza+1; i < lunghezza; i++){
    if (min > vettore[i]) min = vettore[i];
  }
  return min;
}

int ordinarearray_locazioneMinimo(int vettore[VECTOR_SIZE], int iPartenza, int lunghezza){
  for (int i = iPartenza; i < lunghezza; i++){
    if (vettore[i] == ordinarearray_minimo(vettore, iPartenza, lunghezza)) return i;
  }
  return iPartenza;
}

void ordinarearray_swap(int * a, int * b){
  int c = *b;
  *b = *a;
  *a = c;
}

void sort(int vettore[VECTOR_SIZE], int lunghezza){
  for (int i = 0; i < lunghezza; i++){
    ordinarearray_swap(&vettore[i], &vettore[ordinarearray_locazioneMinimo(vettore, i, lunghezza)]);
  }
}

void ordinarearray_stampaFile(int vettore[VECTOR_SIZE], int lunghezza){
  FILE * file = fopen("output.txt", "w");
  for (int i = 0; i < lunghezza; i++){
    fprintf(file, "%d\n", vettore[i]);
  }
}

void ordinarearray_stampaTest(int vettore[VECTOR_SIZE], int lunghezza){
  for (int i = 0; i < lunghezza; i++){
    printf("%d\n", vettore[i]);
  }
}

//@Input: Un file che rappresenta un Array di numeri
//@Output: L'array, ordinato, in un altro file
int exec_ordinarearray(){
  int vettore[VECTOR_SIZE];
  int size;
  ordinarearray_leggiFile(vettore, &size);
  sort(vettore, size);
  ordinarearray_stampaFile(vettore, size);
  return(SUCCESS);
}
