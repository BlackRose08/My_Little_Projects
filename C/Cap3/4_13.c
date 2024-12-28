/*
Si scriva un programma in linguaggio C per poter analizzare una sequenza di numeri.
Dati N numeri interi letti da tastiera si vogliono calcolare e stampare su schermo diversi
risultati:
• quanti sono i numeri positivi, nulli e negativi
• quanti sono i numeri pari e dispari
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int lung, n_precedente, n_corrente;
    int n_positivi = 0, n_negativi = 0, n_nulli = 0, n_pari = 0, n_dispari = 0;

    // Chiede all'utente quanti numeri vuole inserire
    printf("Quanti numeri vuoi inserire?\n");
    scanf("%d", &lung);

    // Se l'utente inserisce 0, il programma termina
    if (lung == 0) {
        return 1;
    }

    // Chiede di inserire il primo numero
    printf("Inserisci un numero\n");
    scanf("%d", &n_precedente);

    // Verifica se il primo numero è positivo, negativo, nullo, pari o dispari
    if (n_precedente >= 0) {
        if (n_precedente != 0) {
            n_positivi++; // Incrementa il conteggio dei numeri positivi
        }
    } else {
        n_negativi++; // Incrementa il conteggio dei numeri negativi
    }

    if (n_precedente == 0) {
        n_nulli++; // Incrementa il conteggio dei numeri nulli
    }

    if (n_precedente % 2 == 0) {
        n_pari++; // Incrementa il conteggio dei numeri pari
    } else {
        n_dispari++; // Incrementa il conteggio dei numeri dispari
    }

    // Ciclo per inserire i numeri successivi
    for (int i = 1; i < lung; i++) {
        printf("Inserisci un numero\n");
        scanf("%d", &n_corrente);

        // Verifica se il numero corrente è positivo, negativo, nullo, pari o dispari
        if (n_corrente >= 0) {
            if (n_corrente != 0) {
                n_positivi++; // Incrementa il conteggio dei numeri positivi
            }
        } else {
            n_negativi++; // Incrementa il conteggio dei numeri negativi
        }

        if (n_corrente == 0) {
            n_nulli++; // Incrementa il conteggio dei numeri nulli
        }

        if (n_corrente % 2 == 0) {
            n_pari++; // Incrementa il conteggio dei numeri pari
        } else {
            n_dispari++; // Incrementa il conteggio dei numeri dispari
        }
    }

    // Stampa i risultati finali
    printf("Numeri positivi: %d\n", n_positivi);
    printf("Numeri negativi: %d\n", n_negativi);
    printf("Numeri nulli: %d\n", n_nulli);
    printf("Numeri pari: %d\n", n_pari);
    printf("Numeri dispari: %d\n", n_dispari);

    return 0;
}
