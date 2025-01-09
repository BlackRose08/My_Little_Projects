/*
Un utente introduce da tastiera due numeri interi, chiamati INIZIO e LUN. 
Il programma deve stampare una serie di numeri interi consecutivi. 
La serie inizia al valore INIZIO ed è lunga LUN elementi.

Esempio:
Inserisci Inizio: 7
Inserisci Lun: 4
La serie è: 7 8 9 10
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Dichiarazione delle variabili per il numero iniziale e la lunghezza della serie
    int inizio, lun;  

    // Richiesta dell'input per il numero di inizio della serie
    printf("Inserisci un numero\n");
    scanf("%d", &inizio);  // Legge il valore di inizio

    // Richiesta dell'input per la lunghezza della serie
    printf("Inserisci lunghezza\n");
    scanf("%d", &lun);  // Legge la lunghezza della serie

    // Stampa dell'intestazione della serie
    printf("La serie e'\n");

    // Ciclo per stampare i numeri consecutivi
    for (int i = 0; i < lun; i++) {
        printf("%d ", inizio);  // Stampa il valore corrente di 'inizio'
        inizio++;  // Incrementa il valore di 'inizio' per il numero successivo
    }

    return 0;  // Termina il programma
}
