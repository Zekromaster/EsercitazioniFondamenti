#include <stdio.h>
#include <stdlib.h>

int main(){
  // Dichiarazione Variabili
  int giorno, mese, anno;
  // Ciclo principale - da questo si uscirà solo quando l'input sarà corretto e semanticamente sensato
  for (;;){
    //Input
    printf("Inserisci il giorno del mese in cui sei nato in formato numerico: ");
    scanf("%d", &giorno);
    printf("Inserisci il mese in cui sei nato in formato numerico: ");
    scanf("%d", &mese);
    printf("Inserisci l'anno in cui sei nato in formato numerico: ");
    scanf("%d", &anno);

    // Sanitizzazione - Controlliamo se il mese e il giorno avrebbero senso
    if (mese >= 13 || mese <= 0 || giorno >= 32 || giorno <= 0){
      printf("L'input inserito non ha senso - inserire dati corretti!\n");
      continue;
    }

    // Sanitizzazione - Controlliamo se il numero di giorni di febbraio è coerente. Ciò viene fatto a parte perchè ha una logica particolarmente complessa rispetto al resto.
    if (mese == 2 && giorno > 29){
      printf("Febbraio può avere al più 29 giorni!\n");
      continue;
    }else if (mese == 2 && giorno == 29){
      // Controlliamo la bisestilità
      if (!((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0)){
        printf("Il %d non è bisestile!\n", anno);
        continue;
      }
    }

    // Sanitizzazione del resto dell'anno
    if (giorno == 31 && (mese == 4 || mese == 6 || mese == 9 || mese == 11)){
      printf("Trenta giorni a novembre, con aprile, giugno e settembre!\n");
      continue;
    }

    // Fine del ciclo 
    break;
  }
  printf("La tua data di nascita è: %02d / %02d / %04d.\n", giorno, mese, anno);
  return(EXIT_SUCCESS);
}
