#include <stdio.h>
#include "trace.h"

// Funzione per calcolare la differenza di numeri
float differenza(float n) {

    int n_ciclo, n_ciclo_scelta;  // Variabili per il numero di cicli di sottrazione
    float differenza;  // Variabile per il risultato della sottrazione
    char scelta;  // Variabile per scegliere se aggiungere altri numeri

    // Richiesta inserimento quanti numeri sottrarre inizialmente
    printf("Inserisci quanti numeri vuoi sottrarre\n");
    scanf("%d", &n_ciclo);

    // Richiesta del primo numero da sottrarre
    printf("Inserisci il numero da operare\n");
    scanf("%f", &n);
    differenza = n;  // Inizializzo la differenza con il primo numero

    // Ciclo per sottrarre i numeri inseriti
    for (size_t i = 1; i < n_ciclo; i++) {
        printf("Inserisci il numero da operare\n");
        scanf("%f", &n);
        differenza -= n;  // Sottrae il numero alla differenza totale
    }

    // Stampa il risultato parziale
    printf("Risultato attuale: %.2f\n", differenza);

    // Chiede se l'utente vuole aggiungere altri numeri
    printf("Vuoi inserire altri numeri?\n 's' = si\n 'n' = no\n");
    scanf(" %c", &scelta);

    // Controlla se l'input per la scelta è valido
    if (scelta != 's' && scelta != 'n') {
        printf("Errore: Digitare correttamente 's' o 'n'\n");
    }

    // Continuo a sottrarre numeri finché l'utente sceglie 's'
    while (scelta == 's') {
        // Chiede quanti numeri aggiungere
        printf("Inserisci quanti numeri vuoi aggiungere\n");
        scanf("%d", &n_ciclo_scelta);

        // Ciclo per sottrarre ulteriori numeri
        for (size_t i = 0; i < n_ciclo_scelta; i++) {
            printf("Inserisci il numero da operare\n");
            scanf("%f", &n);
            differenza -= n;  // Sottrae il numero alla differenza totale
        }

        // Stampa il risultato aggiornato
        printf("Risultato attuale: %.2f\n", differenza);

        // Chiede se si vogliono aggiungere altri numeri
        printf("Vuoi inserire altri numeri?\n 's' = si\n 'n' = no\n");
        scanf(" %c", &scelta);
    }

    // Traccia la funzione (TRACE)
    TRACE();

    return differenza;  // Restituisce il risultato finale
}
