// Librerie per il main
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Librerie personalizzate per le operazioni
#include "somma.h"
#include "differenza.h"
#include "moltiplicazione.h"
#include "divisione.h"
#include "potenze.h"
#include "radice_quadrata.h"

// Variabili globali
float n;

int main(void) {
    // Variabili locali per il main
    char op;  // Operazione scelta dall'utente
    float ris;  // Variabile per il risultato dell'operazione

    // Richiesta inserimento tipo di operazione
    printf("Inserisci il tipo di operazione da effettuare\n");
    printf("s = Somma\n");
    printf("d = Differenza\n");
    printf("m = Moltiplicazione\n");
    printf("i = Divisione\n");
    printf("p = Potenza\n");
    printf("r = Radice quadrata\n");

    // Lettura della scelta dell'utente
    scanf(" %c", &op);

    // Selezione dell'operazione tramite switch
    switch (op) {
        case 's':  // Somma
            ris = somma(n);
            printf("Risultato finale: %.2f\n", ris);
            break;

        case 'd':  // Differenza
            ris = differenza(n);
            printf("Risultato finale: %.2f\n", ris);
            break;

        case 'm':  // Moltiplicazione
            ris = moltiplicazione(n);
            printf("Risultato finale: %.2f\n", ris);
            break;

        case 'i':  // Divisione
            ris = divisione(n);
            printf("Risultato finale: %.2f\n", ris);
            break;

        case 'p':  // Potenza
            ris = potenze(n);
            printf("Risultato finale: %.2f\n", ris);
            break;

        case 'r':  // Radice quadrata
            ris = radice_quadrata(n);
            printf("Risultato finale: %.2f\n", ris);
            break;

        default:  // Caso di operazione non valida
            printf("Nessuna operazione riconosciuta, riprova\n");
            return 1;
    }

    return 0;  // Fine del programma
}
