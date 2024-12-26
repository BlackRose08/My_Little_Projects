/*
Si scriva un programma in linguaggio C che legga da tastiera una serie di numeri interi
fino a quando la somma di tutti i numeri introdotti fino a quel momento non supera il
valore 1000. A quel punto, il programma stampa il valore del prodotto di tutti i numeri
inseriti.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n, somma = 0, prodotto = 1;     // Dichiarazione delle variabili: n (numero inserito), somma (per interrompere il ciclo), prodotto (per moltiplicare tutti i numeri inseriti)

    // Ciclo che continua finché la somma non supera 1000
    while (somma < 1000)
    {
        printf("Inserisci un numero\n");  // Chiede all'utente di inserire un numero
        scanf("%d", &n);  // Legge il numero inserito

        somma += n;  // Aggiunge il numero inserito alla somma totale
        prodotto *= n;  // Moltiplica il numero inserito al prodotto totale
    }

    // Stampa il prodotto di tutti i numeri inseriti
    printf("Il prodotto di tutti i numeri inseriti e': %d\n", prodotto);  // Mostra il risultato finale
}
