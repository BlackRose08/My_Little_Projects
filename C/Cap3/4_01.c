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

        int n, somma = 0;       //Dichiarazione numeri da inserire, e somma assegnandola a 0 in modo da incrementarla

            printf("Inserisci il numero\n");
            scanf("%d", &n);
                        
                    while (n != 0)      //Una volta che n sara' uguale a 0 si fermera' il ciclo
                    {
                        somma = somma + n;
                        printf("Inserisci il numero\n");
                        scanf("%d", &n);
                    }
                    
                printf("La somma dei numeri inseriti e': %d\n", somma);

    }