/*
Si scriva un programma in linguaggio C per calcolare la somma di un insieme di numeri
inseriti da tastiera. Il programma deve:

• leggere una sequenza di numeri
• fermarsi non appena viene inserito il numero 0
• visualizzare il valore corrispondente alla somma dei valori introdotti.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int n, somma = 0;       // Dichiarazione delle variabili: n (numero inserito) e somma (inizializzata a 0 per accumulare i numeri inseriti)

    // Chiede all'utente di inserire un numero
    printf("Inserisci il numero\n");
    scanf("%d", &n);  // Legge il numero inserito dall'utente
    
    // Ciclo che continua finché l'utente non inserisce il numero 0
    while (n != 0)      // Il ciclo continua finché n non è uguale a 0
    {
        somma = somma + n;  // Aggiunge il numero inserito alla somma
        printf("Inserisci il numero\n");  // Chiede un altro numero
        scanf("%d", &n);   // Legge il prossimo numero inserito
    }

    // Stampa la somma totale dei numeri inseriti
    printf("La somma dei numeri inseriti e': %d\n", somma);  // Mostra il risultato finale della somma

}
