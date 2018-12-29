#ifndef COMMON_DEFINITO
  #define COMMON_DEFINITO
  #include <stdlib.h>
  #define DIMENSIONI(a) (sizeof(a) / sizeof(a[0]))
  int esegui(char*);
  char *programmi[] = {
    "Calore",
    "Carattere ASCII",
    "Cinque Numeri",
    "Dati Rettangolo",
    "Formato Data",
    "Media Con Sentinella",
    "Media Con Vettore",
    "Mese Successivo",
    "Numeri Pari",
    "Ordinare Array",
    "Separazione Cifre",
    "Serie Pari E Dispari",
    "Sono Multipli",
    "Sudoku",
    "Tipo Triangolo",
    "Trasponi Matrice",
    "Triangolo Stellato",
    (char *)NULL
  };
  char *descrizioni[] = {
    "Valuta una temperatura empiricamente",
    "Converte un carattere in ASCII",
    "Dati 5 numeri, restituisce somma, media e radice della somma",
    "Trova area, perimetro e diagonale",
    "Converte tra formati di date",
    "Calcola la media",
    "Calcola la media",
    "Dato un mese restituisce il successivo",
    "Dato un numero N, restituisce tutti i numeri pari tra 0 e N-1",
    "Da un file, ordina un array",
    "Dato un numero, restituisce le cifre",
    "Conta gli elementi pari e dispari in una serie",
    "Stabilisce se due numeri X e Y sono multipli tra loro",
    "Verifica la validita' di un sudoku",
    "Dice se un triangolo e' equilatero/isoscele/scaleno",
    "Traspone una matrice",
    "Disegna un triangolo di *",
    (char *)NULL
  };
#endif
