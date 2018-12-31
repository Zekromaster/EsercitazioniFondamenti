# Esercitazioni di Fondamenti di Programmazione

Esercitazioni della Classe I-Z I Anno di Ingegneria Informatica aa 2018/2019 dell'Unisa

## Informazioni sulla Compilazione

`mkdir build && cd build && cmake ../ && make` crea un eseguibile che permette la scelta tra le varie opzioni.  
Eseguendo `make curseless` invece di `make`, è possibile creare un'eseguibile che usi un più semplice menù testuale invece della
libreria _ncurses_.  
**NOTA BENE: "make curseless" è necessario solo qualora la libreria Curses sia presente nel sistema. Se Ncurses non è presente,
nessuna componente che lo richieda sarà compilata e "make" compilera la versione con menù testuale.**

È inoltre possibile compilare un singolo programma tra i vari disponibili, apponendo a "make" il nome del programma interamente minuscolo e in snake_case (SeriePariDispari => serie_pari_dispari, CarattereASCII => carattere_ascii).

## Informazioni sul Codice

Tutto il codice di un dato programma si trova nel relativo file "functions.c". Il tradizionale "main()" è, in questo caso, la funzione "exec_nomeprogramma()". I vari programmi "main.c" contengono solo il seguente codice:

    #include "functions.h"
    int main(){
      return exec_nomeprogramma();
    }

## Giorni degli Esercizi

| Giorno     | Esercizio          |
| ---------- | ------------------ |
| 15/10/2018 | Calore             |
|            | CarattereASCII     |
|            | CinqueNumeri       |
|            | ConvertiBinario    |
|            | DatiRettangolo     |
|            | FormatoData        |
|            | MeseSuccessivo     |
|            | TriangoloStellato  |
|            | NumeriPari         |
|            | SeparazioneCifre   |
|            | SonoMultipli       |
|            | TipoTriangolo      |
| 23/10/2018 | MediaConSentinella |
|            | SeriePariDispari   |
| 13/11/2018 | MediaConVettore    |
| 04/12/2018 | Sudoku             |
| ??/12/2018 | TrasponiMatrice    |
|            | OrdinareArray      |
