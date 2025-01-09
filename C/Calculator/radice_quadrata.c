#include <stdio.h>
#include "math.h"
#include "trace.h"

// Funzione per calcolare la radice quadrata (o radice di un numero con un indice dato)
float radice_quadrata(float n) {

    int n_ciclo_scelta;  // Variabile per il numero di cicli (se l'utente vuole continuare)
    float radice_quadrata, indice;  // Variabili per il risultato della radice e l'indice
    char scelta;  // Variabile per la scelta dell'utente (continuare o no)

    // Richiesta del radicando (numero di cui calcolare la radice)
    printf("Inserisci il radicando\n");
    scanf("%f", &n);

    // Richiesta dell'indice della radice
    printf("Inserisci l'indice della radice\n");
    scanf("%f", &indice);

    // Calcola la radice usando la formula n^(1/indice)
    radice_quadrata = pow(n, 1.0 / indice);
    printf("Risultato radice: %.2f\n", radice_quadrata);

    // Chiede se l'utente vuole calcolare una nuova radice
    printf("Vuoi inserire altri numeri?\n 's' = si\n 'n' = no\n");
    scanf(" %c", &scelta);

    // Controllo dell'input per la scelta
    if (scelta != 's' && scelta != 'n') {
        printf("Errore: Digitare correttamente 's' o 'n'\n");
    }

    // Continuazione del calcolo della radice se l'utente sceglie 's'
    while (scelta == 's') {
        // Richiesta di un nuovo indice per la radice
        printf("Inserisci il nuovo indice\n");
        scanf("%f", &indice);

        // Calcola la nuova radice con il nuovo indice
        radice_quadrata = pow(radice_quadrata, 1.0 / indice);
        printf("Nuovo risultato della radice: %.2f\n", radice_quadrata);

        // Chiede se l'utente vuole continuare ad inserire numeri
        printf("Vuoi inserire altri numeri?\n 's' = si\n 'n' = no\n");
        scanf(" %c", &scelta);
    }

    // Traccia la funzione (TRACE)
    TRACE();

    // Restituisce il risultato finale della radice
    return radice_quadrata;
}
