/*
Si scriva un programma in linguaggio C per calcolare la media aritmetica di una serie
di numeri inseriti da tastiera. L’introduzione di un valore particolare pari a “0” indica il
termine del caricamento dei dati.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    // Dichiarazione delle variabili
    float n, somma = 0, media, contm_media_n = 0;   //Dichiarazione numeri da inserire, somma (per calcolare la media), media e contatore numeri (da dividere con la somma per ricavare la media)

    // Chiede all'utente di inserire un numero
    printf("Inserisci dei numeri per calcolare la media (0 per uscire)\n");
    scanf("%f", &n);  // Legge il numero inserito dall'utente

    // Ciclo che continua finché l'utente non inserisce 0
    while (n != 0)
    {
        contm_media_n++;  // Incrementa il contatore per ogni numero inserito
        somma += n;       // Aggiunge il numero alla somma totale
        media = somma / contm_media_n;  // Calcola la media dividendo la somma per il numero di elementi
        printf("Inserisci dei numeri per calcolare la media\n");  // Chiede un altro numero
        scanf("%f", &n);  // Legge il prossimo numero inserito
    }

    // Stampa la media finale
    printf("Media: %.2f\n", media);  // Visualizza la media con 2 decimali
}
