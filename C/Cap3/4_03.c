/*
Si scriva un programma in linguaggio C che legga da tastiera una serie di numeri interi
fino a quando la somma di tutti i numeri introdotti fino a quel momento non supera il
valore 1000. A quel punto, il programma stampa il valore del prodotto di tutti i numeri
inseriti.
*/

#include <stdio.h>
#include <stdlib.h>

    int main(void){

        int n, somma = 0, prodotto = 1;     //Dichiarazione numeri da inserire, somma (per interrompere il ciclo), prodotto

                while (somma < 1000)
                {
                    printf("Inserisci un numero\n");
                    scanf("%d", &n);
                    somma += n;
                    prodotto *= n;

                }

                printf("Il prodotto di tutti i numeri inseriti e': %d\n", prodotto);
    }