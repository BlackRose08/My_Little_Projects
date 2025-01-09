/*
Sia dato un numero intero positivo N inserito da tastiera. Si scriva un programma in
linguaggio C che calcoli i numeri interi che sono divisori (con resto uguale a zero) di N.
Dire inoltre se N è un numero primo.
Suggerimento.
• Un numero M è divisore di un numero N se il resto della divisione N/M è uguale a
zero.
• Un numero è primo se è divisibile solo per 1 o per il numero stesso.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    // Dichiarazione delle variabili
    int n, i;
    int count = 0;

    // Chiediamo all'utente di inserire un numero
    printf("Inserisci un numero\n");
    scanf("%d", &n);

    // Se il numero è minore o uguale a 1, non è valido per il calcolo dei divisori
    if (n <= 1) {
        printf("Il numero deve essere maggiore di 1\n");
        return 0;  // Uscita anticipata se il numero non è valido
    }

    // Stampa i divisori di n
    printf("I divisori di %d sono: ", n);

    // Ciclo per trovare e stampare i divisori di n
    for (i = 1; i <= n; i++) {
        // Se il resto della divisione n/i è zero, i è un divisore
        if (n % i == 0) {
            printf("%d  ", i);  // Stampa il divisore
            count++;  // Incrementa il contatore dei divisori
        }
    }

    // Se il numero ha esattamente 2 divisori (1 e se stesso), è un numero primo
    if (count == 2) {
        printf("\nIl numero %d e' primo\n", n);
    }

    return 0;  // Fine del programma
}
            
            


            
                
