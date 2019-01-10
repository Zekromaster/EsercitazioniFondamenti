#include "maincludes.h"

int esegui(char* s){
  if (strcmp(s, "Calore") == 0) return exec_calore();
  if (strcmp(s, "Carattere ASCII") == 0) return exec_carattereascii();
  if (strcmp(s, "Cinque Numeri") == 0) return exec_cinquenumeri();
  if (strcmp(s, "Converti Binario") == 0) return exec_convertibinario();
  if (strcmp(s, "Dati Rettangolo") == 0) return exec_datirettangolo();
  if (strcmp(s, "Formato Data") == 0) return exec_formatodata();
  if (strcmp(s, "Media Con Sentinella") == 0) return exec_mediaconsentinella();
  if (strcmp(s, "Media Con Vettore") == 0) return exec_mediaconvettore();
  if (strcmp(s, "Mese Successivo") == 0) return exec_mesesuccessivo();
  if (strcmp(s, "Numeri Pari") == 0) return exec_numeripari();
  if (strcmp(s, "Ordinare Array") == 0) return exec_ordinarearray();
  if (strcmp(s, "Separazione Cifre") == 0) return exec_separazionecifre();
  if (strcmp(s, "Serie Crescente O Decrescente") == 0) return exec_seriecrescentedecrescente();
  if (strcmp(s, "Serie Positivi E Negativi") == 0) return exec_seriepositivinegativi();
  if (strcmp(s, "Sono Multipli") == 0) return exec_sonomultipli();
  if (strcmp(s, "Sudoku") == 0) return exec_sudoku();
  if (strcmp(s, "Tipo Triangolo") == 0) return exec_tipotriangolo();
  if (strcmp(s, "Trasponi Matrice") == 0) return exec_trasponimatrice();
  if (strcmp(s, "Triangolo Stellato") == 0) return exec_triangolostellato();
  return 789;
}
