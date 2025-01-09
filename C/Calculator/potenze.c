#include <stdio.h>
#include <math.h>
#include "trace.h"

// Funzione per calcolare la potenza di numeri
float potenze(float n) {

    double base, esponente, potenza;  // Variabili per la base, esponente e il risultato della potenza
    char scelta;  // Variabile per scegliere se eseguire un nuovo calcolo

    // Primo calcolo di potenza
    printf("Inserisci la base: \n");
    scanf("%lf", &base);  // Inserimento della base
    printf("Inserisci l'esponente: \n");
    scanf("%lf", &esponente);  // Inserimento dell'esponente

    // Calcola la potenza
    potenza = pow(base, esponente);  // Calcolo della potenza con la funzione pow
    printf("Risultato potenza: %.2f\n", potenza);

    // Secondo calcolo di potenza con 's' per continuare
    printf("Vuoi inserire altri numeri?\n 's' = si\n 'n' = no\n");
    scanf(" %c", &scelta);  // Chiede se si vuole continuare

    // Controlla se l'input dell'utente è valido
    if (scelta != 's' && scelta != 'n') {
        printf("Errore: Digitare correttamente 's' o 'n'\n");
    }

    // Continuazione del calcolo della potenza se l'utente sceglie 's'
    while (scelta == 's') {
        printf("Inserisci il nuovo esponente: \n");
        scanf("%lf", &esponente);  // Nuovo esponente per aggiornare la potenza
        potenza = pow(potenza, esponente);  // Calcola la nuova potenza
        printf("Nuovo risultato della potenza: %.2f\n", potenza);  // Stampa il risultato aggiornato

        // Chiede se si vuole inserire un altro esponente
        printf("Vuoi inserire altri numeri?\n 's' = si\n 'n' = no\n");
        scanf(" %c", &scelta);
    }

    // Traccia la funzione (TRACE)
    TRACE();

    // Restituisce il risultato finale della potenza
    return potenza;
}
