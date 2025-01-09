/*
Si scriva un programma in linguaggio C che converta un numero binario in un numero
decimale. Il numero binario è rappresentato su N bit, e il valore di N è inserito da tastiera. L’utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit
meno significativo (ossia dal bit di peso 2^0
). 
Il programma visualizzerà il numero decimale
corrispondente.
Suggerimento. Per calcolare le potenze di 2 utilizzare la funzione pow, includendo la libreria
math.h. Ad esempio per calcolare 2^5
, si scriverà pow(2,5). In generale, data una base a, per
calcolare y = a^b
, si scrive y = pow(a,b) includendo la libreria math.h.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int bit, esp;                    // Variabili per il numero di bit e l'esponente della potenza di 2
    int ris_temp, ris_final = 0;      // Variabili per il risultato temporaneo e finale della conversione

    // Chiedi all'utente quanti bit deve essere lungo il numero binario
    printf("Quanti bit deve essere lungo il numero binario?\n");
    scanf("%d", &bit);

    // Dichiarazione dell'array n_bit con la lunghezza pari al numero di bit inserito
    int n_bit[bit];

    // Ciclo per chiedere all'utente di inserire i bit uno per uno
    for (int i = 0; i < bit; i++) {
        printf("Inserisci un numero binario da convertire in decimale\n");
        scanf("%d", &n_bit[i]);

        // Controlla che l'input sia solo 0 o 1, altrimenti termina il programma
        if (n_bit[i] != 0 && n_bit[i] != 1) {
            printf("Inserisci 0 o 1\n");
            return 1; // Esce dal programma se il numero inserito non è valido
        }
    }

    // Ciclo per eseguire la conversione da binario a decimale
    for (int i = 0; i < bit; i++) {
        esp = bit - 1 - i;  // Calcola l'esponente della potenza di 2 per il bit corrente

        // Se il bit è 1, calcola il valore corrispondente alla posizione e somma al risultato finale
        if (n_bit[i] == 1) {
            ris_temp = n_bit[i] * pow(2, esp); // Calcola il valore del bit in decimale
            ris_final = ris_final + ris_temp;  // Aggiungi al risultato finale
        }       
        // Se il bit è 0, non è necessario fare nulla poiché ris_temp rimane 0
        else {
            ris_temp = 0;
        }
    }

    // Ciclo per stampare il numero binario inserito
    for (int i = 0; i < bit; i++) {
        printf("%d", n_bit[i]); // Stampa ogni bit dell'array
    }

    // Stampa il risultato della conversione
    printf(" (Binario) ---> %d (Decimale)\n", ris_final);

    return 0; // Fine del programma
}

                   
            
            


    