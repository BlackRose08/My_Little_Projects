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

        int n, contp = 0, contot = 0;       //Dichiarazione numeri da inserire, contatore numeri pari, e contatore numeri totali

            printf("Inserisci un numero, finche' non sia -1\n");
            scanf("%d", &n);

                while (n != -1)     //Esegui un ciclo finche' n e' diverso da -1
                {
                    
                        if (n % 2 == 0)     //Se n diviso 2 da' come resto 0 allora il numero e' pari
                        {
                            contp++;        //Incremento contatore numeri pari
                        }

                        contot++;           //Incremento contatore numeri totali
                        
                    printf("Inserisci un numero\n");\
                    scanf("%d", &n);   
                }

                printf("Numeri totali inseriti: %d\n", contot);
                printf("Numeri pari inseriti: %d\n", contp);
                
    }