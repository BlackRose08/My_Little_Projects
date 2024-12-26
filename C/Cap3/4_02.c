/*
Un utente inserisce da tastiera una serie di numeri interi positivi, ed il termine della serie
è indicato dall’inserimento del valore -1. Il programma, al termine dell’inserimento, deve
stampare quanti numeri pari l’utente aveva inserito, e quanti numeri in totale sono stati
inseriti.

Esempio:

Inserisci un numero: 5
Inserisci un numero: 3
Inserisci un numero: 6
Inserisci un numero: 5
Inserisci un numero: 2
Inserisci un numero: 5
Inserisci un numero: 7
Inserisci un numero: 7
Inserisci un numero: -1
Numeri totali inseriti: 8
Numeri pari inseriti: 2
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n, contp = 0, contot = 0;       // Dichiarazione delle variabili: n (numero inserito), contp (contatore numeri pari), contot (contatore numeri totali)

    // Chiede all'utente di inserire un numero
    printf("Inserisci un numero, finche' non sia -1\n");
    scanf("%d", &n);  // Legge il numero inserito

    // Ciclo che continua finché l'utente non inserisce -1
    while (n != -1)     // Esegui un ciclo finché n è diverso da -1
    {
        // Verifica se il numero inserito è pari
        if (n % 2 == 0)     // Se n diviso 2 dà come resto 0, allora il numero è pari
        {
            contp++;        // Incrementa il contatore dei numeri pari
        }

        contot++;           // Incrementa il contatore dei numeri totali

        // Chiede un altro numero
        printf("Inserisci un numero\n");
        scanf("%d", &n);   // Legge il prossimo numero inserito
    }

    // Stampa il numero totale di numeri inseriti
    printf("Numeri totali inseriti: %d\n", contot);  // Stampa il conteggio dei numeri totali
    printf("Numeri pari inseriti: %d\n", contp);     // Stampa il conteggio dei numeri pari

}
