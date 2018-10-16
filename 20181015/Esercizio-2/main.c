#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  // Definizione variabili
  float b, h;
  float perimetro, area, diagonale;
  // Acquisizione base - con ciclo per verifica errori
  for (;;){
    printf("Inserire base del rettangolo: ");
    scanf("%f", &b);
    if (b <= 0){
      printf("Le dimensioni devono essere positive!");
      continue;
    }
    break;
  }

  // Acquisizione altezza - come sopra
  for (;;){
    printf("Inserire altezza del rettangolo: ");
    scanf("%f", &h);
    if (h <= 0){
      printf("Le dimensioni devono essere positive!");
      continue;
    }
    break;
  }

  // Calcolo del perimetro
  perimetro = 2*(b+h);

  // Calcolo dell'area
  area = (b*h)/2;

  // Calcolo della diagonale
  diagonale = sqrt(b*b + h*h);

  // Output
  printf("Perimetro: %.2f\nArea: %.2f\nDiagonale: %.2f\n", perimetro, area, diagonale);
}
