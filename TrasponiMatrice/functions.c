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

// Lettura della matrice
void trasponimatrice_leggiMatrice(float matrix[VECTOR_SIZE][VECTOR_SIZE], int * righe, int * colonne) {
  char nomeFile[VECTOR_SIZE];
  FILE * file;
  int counter[2] = {0, 0};

  // Input del nome del file
  printf("Inserisci il nome del file all'interno del quale è ubicata la matrice (./ indica la cartella corrente): ");
  scanf("%s", nomeFile);

  file = fopen(nomeFile, "r");
  if (file == NULL){
    printf("Errore nell'apertura di %s: java.lang.NullPointerException.\n", nomeFile);
    exit(ENOENT);
  }
  fscanf(file, "%d %d", righe, colonne);
  for (;counter[0] < *righe; counter[0]++){
    for (;counter[1] < *colonne; counter[1]++){
      fscanf(file, "%f ", &matrix[counter[0]][counter[1]]);
    }
  }
  fclose(file);
}

void trasponimatrice_trasponiMatrice(float matrix[VECTOR_SIZE][VECTOR_SIZE], int righe, int colonne) {
  float tmp;
  for (int i = 0; i < righe; i++){
    for (int j = i; j < colonne; j++){
      tmp = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = tmp;
    }
  }
}

void trasponimatrice_stampaMatrice(float matrix[VECTOR_SIZE][VECTOR_SIZE], int righe, int colonne) {
  char nomeFile[VECTOR_SIZE];
  FILE * file;
  int counter[2] = {0, 0};

  // Input del nome del file
  printf("Inserisci il nome del file all'interno del quale scrivere la nuova matrice (./ indica la cartella corrente): ");
  scanf("%s", nomeFile);
  file = fopen(nomeFile, "w");
  for (;counter[0] < righe; counter[0]++){
    for (;counter[1] < colonne; counter[1]++){
      fprintf(file, "%f ", matrix[counter[0]][counter[1]]);
    }
    fprintf(file, "\n");
  }
  fclose(file);
}

//@Input: Una file contenente una matrice.
//@Output: La trasposta, nella forma del file trasposta.txt
int exec_trasponimatrice() {
  float matrix[VECTOR_SIZE][VECTOR_SIZE];
  int righe, colonne;

  trasponimatrice_leggiMatrice(matrix, &righe, &colonne);
  trasponimatrice_trasponiMatrice(matrix, righe, colonne);
  trasponimatrice_stampaMatrice(matrix, colonne, righe);

  return(SUCCESS);
}
