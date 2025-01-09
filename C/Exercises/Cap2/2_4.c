/*
Si scriva un programma in linguaggio C che legga due numeri da tastiera, detti A e B, e
determini le seguenti informazioni, stampandole a video:
1. determini se B è un numero positivo o negativo
2. determini se A è un numero pari o dispari
3. calcoli il valore di A + B
4. determini quale scelta dei segni nell’espressione (±A) + (±B) porta al risultato massimo, e quale è questo valore massimo.
Suggerimento. Nel punto 4., il valore massimo della somma di A e B si può ottenere
sommando il valore assoluto di A e di B.
*/

#include <stdio.h>
#include <stdlib.h>

    int main(void){
        
        int A, B;

        printf("Inserisci il primo numero\n");
        scanf("%d", &A);
        printf("Inserisci il secondo numero\n");
        scanf("%d", &B);

            if (B >= 0)
            {
                printf("Il secondo numero e' un numero positivo\n");
            }
            else{
                printf("Il secondo numero e' un numero negativo");
            }
            
            if (A % 2 == 0)
            {
                printf("Il primo numero e' pari");      
            }
            else{
                printf("Il primo numero e' dispari");      
            }
                  
    }