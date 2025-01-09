/*
Data l’equazione
ax + b = 0
con a e b inseriti da tastiera, scrivere un programma in linguaggio C per determinare il
valore di x, che risolve l’equazione.
*/

#include <stdio.h>
#include <stdlib.h>

    int main(void){

        float a, b;
        float x;
            
            printf("Inserisci a\n");
            scanf("%d", &a);
            printf("Inserisci b\n");
            scanf("%d", &b);

            x = -b / a;           

            printf("La X vale: %f \n", x);
    }