#include "maincludes.h"

int esegui(char* s){
  if (strcmp(s, "Calore") == 0) return exec_calore();
  if (strcmp(s, "Carattere ASCII") == 0) return exec_carattereascii();
  if (strcmp(s, "Dati Rettangolo") == 0) return exec_datirettangolo();
  if (strcmp(s, "Formato Data") == 0) return exec_formatodata();
  if (strcmp(s, "Media Con Sentinella") == 0) return exec_mediaconsentinella();
  if (strcmp(s, "Media Con Vettore") == 0) return exec_mediaconvettore();
  if (strcmp(s, "Mese Successivo") == 0) return exec_mesesuccessivo();
  if (strcmp(s, "Ordinare Array") == 0) return exec_ordinarearray();
  if (strcmp(s, "Separazione Cifre") == 0) return exec_separazionecifre();
  if (strcmp(s, "Serie Pari Dispari") == 0) return exec_serieparidispari();
  if (strcmp(s, "Sono Multipli") == 0) return exec_sonomultipli();
  if (strcmp(s, "Sudoku") == 0) return exec_sudoku();
  if (strcmp(s, "Tipo Triangolo") == 0) return exec_tipotriangolo();
  if (strcmp(s, "Trasponi Matrice") == 0) return exec_trasponimatrice();
  return 789;
}
