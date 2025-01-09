/*
Si scriva un programma in linguaggio C che acquisisca tre numeri interi da tastiera e:
• determini, stampando un messaggio opportuno quale dei tre numeri (il primo, il
secondo o il terzo) sia maggiore
• stampi il valore di tale numero.
Si trascuri il caso in cui i numeri siano uguali.
*/

#include <stdio.h>
#include <stdlib.h>

    int main(void){
        
        int n1, n2, n3;
        printf("Inserisci il primo numero\n");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero\n");
        scanf("%d", &n2);
        printf("Inserisci il terzo numero\n");
        scanf("%d", &n3);

            if (n1 > n2 && n1 > n3)
            {
                printf("%d e' numero il piu' grande \n", n1);
            }
            else if (n2 > n1 && n2 > n3)
            {
                printf("%d e' il numero piu' grande \n", n2);
            }
            else if (n3 > n1 && n3 > n2)
            {
                printf("%d e' il numero piu' grande \n", n3);
            }
            
            
            
    }