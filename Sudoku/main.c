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

// IMPLEMENTAZIONE DEL SUDOKU

/*===========================================================
FUNZIONI CHE CONTROLLANO LA SANITÀ DEL SUDOKU
===========================================================*/

/*Questa funzione controlla il sudoku contenga solo numeri
  che vanno da 0 a size
  @param int matrix[][] La matrice del sudoku
  @param int size La dimensione dello stesso
  @param bool zeroIndex Se il sudoku è zeroIndexed
  @return true se sano, false se non sano
*/
bool isSaneSudoku(int matrix[VECTOR_SIZE][VECTOR_SIZE], int size,
                  bool zeroIndex) {
  /*Stabiliamo il numero da cui inizia il sudoku: uno se !zeroIndex,
    zero se zeroIndex */
  int startingPoint = 1 - zeroIndex;

  /*Il risultato all'inizio è true non avendo ancora trovato nulla
    di non valido*/
  bool result = true;

  /*Controlliamo ogni casella. Se il contenuto non è compreso tra zero e size-1
  (Zero Indexed) o 1 e size (Zero Unindexed), non è valido*/
  for (int i = 0; i < size && result; i++) {
    for (int j = 0; j < size; j++) {
      result = !(matrix[i][j] > size - zeroIndex ||
                 (matrix[i][j] < startingPoint)) ||
               false;
    }
  }

  return result;
}

/*===========================================================
FUNZIONI CHE CONTROLLANO LA VALIDITÀ DEL SUDOKU
===========================================================*/

/*Questa funzione controlla se una riga è valida
  @param int matrix[][] La matrice contenente la riga
  @param int length La lunghezza della riga
  @param int row La riga
  @return Una booleana che indica lo stato della riga
*/
bool isValidRow(int matrix[VECTOR_SIZE][VECTOR_SIZE], int length, int row) {
  /*Il risultato, all'inizio, è vero, poichè ancora non son state trovate
    soluzioni non valide*/
  bool result = true;

  /*In questo ciclo controlliamo ogni elemento e verifichiamo non sia uguale
    A nessuno degli elementi successivi. Se lo è, si interrompe il ciclo e la
    riga non è valida*/
  for (int i = 0; i < length - 1 && result; i++) {
    for (int j = i + 1; j < length && result; j++) {
      result = !(matrix[row][i] == matrix[row][j]) || false;
    }
  }
  return result;
}

/*Questa funzione controlla se una colonna è valida
  @param int matrix[][] La matrice contenente la colonna
  @param int length La lunghezza della colonna
  @param int col La colonna
  @return Una booleana che indica lo stato della colonna
*/
bool isValidCol(int matrix[VECTOR_SIZE][VECTOR_SIZE], int length, int col) {
  /*Il risultato, all'inizio, è vero, poichè ancora non son state trovate
    soluzioni non valide*/
  bool result = true;

  /*In questo ciclo controlliamo ogni elemento e verifichiamo non sia uguale
    A nessuno degli elementi successivi. Se lo è, si interrompe il ciclo e la
    riga non è valida*/
  for (int i = 0; i < length - 1 && result == true; i++) {
    for (int j = i + 1; j < length && result == true; j++) {
      result = !(matrix[i][col] == matrix[j][col]) || false;
    }
  }
  return result;
}

/*Questa funzione controlla se un intero sudoku è valido
  @param int matrix[][] La matrice
  @param int size La dimensione della matrice (sizeXsize)
  @return Una booleana che indica lo stato del sudoku
*/
bool isValidSudoku(int matrix[VECTOR_SIZE][VECTOR_SIZE], int size) {
  /*Il risultato, all'inizio, è vero, poichè ancora non son state trovate
    soluzioni non valide*/
  bool result = true;

  /*In questi due cicli controlliamo ogni riga e ogni colonna per la sua
    validità. Il ciclo viene interrotto se anche una sola riga o colonna
    è non valida*/
  for (int i = 0; i < size && result == true; i++) {
    result = (isValidRow(matrix, size, i) || false);
  }
  for (int j = 0; j < size && result == true; j++) {
    result = (isValidCol(matrix, size, j) || false);
  }
  return result;
}

/*===========================================================
FUNZIONE CHE ESEGUE L'INPUT E OUTPUT DEL SUDOKU
===========================================================*/
/*@Input: Un sudoku e le sue dimensioni
  @Output: Se il sudoku è valido*/
int main() {
  int sudoku[VECTOR_SIZE][VECTOR_SIZE];
  int size;

  // Ciclo di sanitizzazione
  while (true) {
    printf("Inserisci le dimensioni del sudoku: ");
    scanf("%d", &size);
    if (size > 0 && size <= VECTOR_SIZE) {
      break;
    }
    printf("Inserisci delle dimensioni comprese tra 1 e %d", VECTOR_SIZE);
  }

  // Input del Sudoku e Sanitizzazione
  while (true) {
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
        printf("Inserisci Riga %d - Colonna %d: ", i, j);
        scanf("%d", &sudoku[i][j]);
      }
    }
    if (isSaneSudoku(sudoku, size, false))
      break;
    printf("Il sudoku da te inserito non è sano! Probabilmente hai immesso un "
           "numero maggiore di %d\n",
           size);
  }

  // Output
  if (isValidSudoku(sudoku, size)) {
    printf("Il sudoku da te inserito è valido! Complimenti!\n");
  } else {
    printf("Il sudoku che hai inserito non è valido! Ricontrollalo!\n");
  }
}
