# Esercitazioni di Fondamenti di Programmazione

Esercitazioni della Classe I-Z I Anno di Ingegneria Informatica aa 2018/2019 dell'Unisa

## Informazioni sulla Compilazione
Il gitignore è progettato per ignorare i file di estensione .built. Pertanto, é consigliabile in fase di compilazione, utilizzare il comando 'gcc main.c -o main.built' o altri comandi che producano file .built. Questo permette, in caso si voglia contribuire alla repository, di non committare accidentalmente file binari.  

Inoltre, per alcuni programmi è necessario linkare librerie specifiche. Per evitare di dover leggere il sorgente di ogni singolo software, elencherò di seguito le librerie necessarie.  

* Esercizio 4: math.h (Con gcc su GNU/Linux è possibile includerla con -lm)
