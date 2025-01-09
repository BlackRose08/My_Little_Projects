#include <stdio.h>
#include "trace.h"

// Funzione per calcolare la divisione di numeri
float divisione(float n) {

    int n_ciclo, n_ciclo_scelta;  // Variabili per il numero di cicli di divisione
    float divisione;  // Variabile per il risultato della divisione
    char scelta;  // Variabile per scegliere se aggiungere altri numeri

    // Richiesta inserimento quanti numeri dividere inizialmente
    printf("Inserisci quanti numeri vuoi dividere\n");
    scanf("%d", &n_ciclo);

    // Richiesta del primo numero da operare
    printf("Inserisci il numero da operare\n");
    scanf("%f", &n);
    divisione = n;  // Inizializzo il risultato della divisione con il primo numero

    // Ciclo per dividere i numeri inseriti
    for (size_t i = 1; i < n_ciclo; i++) {
        printf("Inserisci il numero da operare\n");
        scanf("%f", &n);
        divisione /= n;  // Divide il numero dal risultato corrente
    }

    // Stampa il risultato parziale
    printf("Risultato attuale: %.2f\n", divisione);

    // Chiede se l'utente vuole aggiungere altri numeri
    printf("Vuoi inserire altri numeri?\n 's' = si\n 'n' = no\n");
    scanf(" %c", &scelta);

    // Controlla se l'input per la scelta è valido
    if (scelta != 's' && scelta != 'n') {
        printf("Errore: Digitare correttamente 's' o 'n'\n");
    }

    // Continuo a dividere finché l'utente sceglie 's'
    while (scelta == 's') {
        // Chiede quanti numeri aggiungere
        printf("Inserisci quanti numeri vuoi aggiungere\n");
        scanf("%d", &n_ciclo_scelta);

        // Ciclo per dividere ulteriori numeri
        for (size_t i = 0; i < n_ciclo_scelta; i++) {
            printf("Inserisci il numero da operare\n");
            scanf("%f", &n);
            divisione /= n;  // Divide il numero dal risultato corrente
        }

        // Stampa il risultato aggiornato
        printf("Risultato attuale: %.2f\n", divisione);

        // Chiede se si vogliono aggiungere altri numeri
        printf("Vuoi inserire altri numeri?\n 's' = si\n 'n' = no\n");
        scanf(" %c", &scelta);
    }

    // Traccia la funzione (TRACE)
    TRACE();

    return divisione;  // Restituisce il risultato finale
}
