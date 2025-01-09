#include <stdio.h>
#include "trace.h"

// Funzione per calcolare la somma di numeri
float somma(float n) {
    int n_ciclo, n_ciclo_scelta;  // Variabili per il numero di cicli di somma
    float somma = 0.0;  // Inizializzo la somma a 0
    char scelta;  // Variabile per scegliere se aggiungere altri numeri

    // Richiesta inserimento quanti numeri sommare inizialmente
    printf("Inserisci quanti numeri vuoi sommare\n");
    scanf("%d", &n_ciclo);

    // Ciclo per sommare i numeri inseriti
    for (size_t i = 0; i < n_ciclo; i++) {
        printf("Inserisci il numero da operare\n");
        scanf("%f", &n);

        somma += n;  // Somma il numero inserito alla somma totale
    }

    // Stampa il risultato parziale
    printf("Risultato attuale: %.2f\n", somma);

    // Chiede se l'utente vuole aggiungere altri numeri
    printf("Vuoi inserire altri numeri?\n 's' = si\n 'n' = no\n");
    scanf(" %c", &scelta);

    // Controlla se l'input per la scelta è valido
    if (scelta != 's' && scelta != 'n') {
        printf("Errore: Digitare correttamente 's' o 'n'\n");
    }

    // Continuo ad aggiungere numeri finché l'utente sceglie 's'
    while (scelta == 's') {
        // Chiede quanti numeri aggiungere
        printf("Inserisci quanti numeri vuoi aggiungere\n");
        scanf("%d", &n_ciclo_scelta);

        // Ciclo per aggiungere ulteriori numeri
        for (size_t i = 0; i < n_ciclo_scelta; i++) {
            printf("Inserisci il numero da operare\n");
            scanf("%f", &n);

            somma += n;  // Aggiunge il numero alla somma totale
        }

        // Stampa il risultato aggiornato
        printf("Risultato attuale: %.2f\n", somma);

        // Chiede di nuovo se si vogliono aggiungere altri numeri
        printf("Vuoi inserire altri numeri?\n 's' = si\n 'n' = no\n");
        scanf(" %c", &scelta);
    }

    // Traccia la funzione (TRACE)
    TRACE();

    return somma;  // Restituisce il risultato finale
}
