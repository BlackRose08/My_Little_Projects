/*Si scriva un programma in linguaggio C che legga due valori interi e 
visualizzi la loro somma.*/

#include <stdio.h>
#include  <stdlib.h>

    int main(void){

        int a, b, somma;   //Dichiarazione due numeri da sommare e la somma

            printf("Inserisci il primo numero:\n");
            scanf("%d", &a);
            printf("Inserisci il secondo numero:\n");
            scanf("%d", &b);
            
                somma = a + b;  //Assegnazione somma

            printf("La somma dei due numeri e': %d\n", somma);
    
        return 0;
    }