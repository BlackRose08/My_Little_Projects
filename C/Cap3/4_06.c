/*
Si scriva un programma in linguaggio C per calcolare il valore massimo e minimo di un
insieme di N numeri inseriti da tastiera. Il programma deve leggere il valore di N, ed
in seguito deve leggere una sequenza di N numeri. A questo punto il programma deve
stampare il massimo ed il minimo tra i numeri inseriti.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    // Dichiarazione delle variabili: 
    // n per il numero inserito, max per il massimo, min per il minimo
    float n, max = 0, min;

    // Chiede all'utente di inserire dei numeri, finché non inserisce 0
    printf("Inserisci dei numeri (0 per terminare)\n");
    scanf("%f", &n);  // Legge il primo numero

    // Ciclo che continua finché l'utente non inserisce 0
    while (n != 0)
    {
        // Verifica se il numero corrente è maggiore del massimo
        if (max < n)
        {
            max = n;  // Aggiorna il massimo
        }

        // Qui dovrebbe esserci il controllo per il minimo, ma manca la logica corretta per inizializzarlo
        // La logica dovrebbe essere simile a quella per il massimo, ovvero verificare se il numero
        // corrente è minore di min e aggiornarlo
        printf("Inserisci dei numeri\n");
        scanf("%f", &n);

        // Questo blocco di codice è errato e non fa nulla, quindi non influisce sul risultato finale
        if (min < max)
        {
        }

    }

    // Stampa il massimo e il minimo (questi non sono correttamente calcolati nel codice attuale)
    printf("Il numero massimo e': %.2f\n", max);
    printf("Il numero minimo e': %.2f\n", min);

}