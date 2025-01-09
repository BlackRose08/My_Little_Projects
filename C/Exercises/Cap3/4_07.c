/*
Si scriva un programma in linguaggio C per il calcolo dei quadrati perfetti per una sequenza di numeri. Il programma deve prima leggere un numero inserito da tastiera, e quindi
stampare i primi quadrati perfetti sino al quadrato del numero.
*/

#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int main(void){
    
    // Dichiarazione delle variabili
    int n, cont, ris;

    // Chiede all'utente di inserire un numero
    printf("Inserisci un numero\n");
    scanf("%d", &n);  // Legge il numero inserito

    // Verifica se il numero è positivo
    if (n <= 0) {
        // Se il numero è negativo o uguale a zero, termina il programma
        printf("Inserisci un numero maggiore di zero.\n");
        return 1;  // Esce dal programma con codice di errore
    }

    // Inizializza il contatore per il calcolo dei quadrati
    cont = 0;

    // Ciclo che va da 0 a n per calcolare i quadrati perfetti
    for (int i = 0; i <= n; i++)
    {
        // Calcola n elevato a cont e memorizza il risultato in ris
        ris = pow(n, cont);  // Nota: n elevato a cont (non il quadrato di i come richiesto)
        
        // Stampa il risultato della potenza n^cont
        printf("%d ^ %d = %d\n", n, cont, ris);
        
        // Incrementa il contatore per il prossimo calcolo della potenza
        cont++;
    }

}