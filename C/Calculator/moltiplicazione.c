#include <stdio.h>
#include "trace.h"

// Funzione per calcolare il risultato di una moltiplicazione
float moltiplicazione(float n) {

    int n_ciclo, n_ciclo_scelta;  // Variabili per il numero di cicli di moltiplicazione
    float moltiplicazione = 1;  // Inizializzo il risultato della moltiplicazione a 1
    char scelta;  // Variabile per scegliere se aggiungere altri numeri

    // Richiesta inserimento quanti numeri moltiplicare inizialmente
    printf("Inserisci quanti numeri vuoi moltiplicare\n");
    scanf("%d", &n_ciclo);

    // Ciclo per moltiplicare i numeri inseriti
    for (size_t i = 0; i < n_ciclo; i++) {
        printf("Inserisci il numero da operare\n");
        scanf("%f", &n);

        moltiplicazione *= n;  // Moltiplica il numero inserito con il risultato totale
    }

    // Stampa il risultato parziale
    printf("Risultato attuale: %.2f\n", moltiplicazione);

    // Chiede se l'utente vuole aggiungere altri numeri
    printf("Vuoi inserire altri numeri?\n 's' = si\n 'n' = no\n");
    scanf(" %c", &scelta);

    // Controlla se l'input per la scelta è valido
    if (scelta != 's' && scelta != 'n') {
        printf("Errore: Digitare correttamente 's' o 'n'\n");
    }

    // Continuo a moltiplicare finché l'utente sceglie 's'
    while (scelta == 's') {
        // Chiede quanti numeri aggiungere
        printf("Inserisci quanti numeri vuoi aggiungere\n");
        scanf("%d", &n_ciclo_scelta);

        // Ciclo per moltiplicare ulteriori numeri
        for (size_t i = 0; i < n_ciclo_scelta; i++) {
            printf("Inserisci il numero da operare\n");
            scanf("%f", &n);

            moltiplicazione *= n;  // Moltiplica il numero con il risultato totale
        }

        // Stampa il risultato aggiornato
        printf("Risultato attuale: %.2f\n", moltiplicazione);

        // Chiede se si vogliono aggiungere altri numeri
        printf("Vuoi inserire altri numeri?\n 's' = si\n 'n' = no\n");
        scanf(" %c", &scelta);
    }

    // Traccia la funzione (TRACE)
    TRACE();

    return moltiplicazione;  // Restituisce il risultato finale
}
