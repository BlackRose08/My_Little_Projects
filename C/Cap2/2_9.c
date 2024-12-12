/*
Si scriva un programma in linguaggio C che acquisisca due numeri interi da tastiera e:
• determini, stampando un messaggio opportuno quale dei due numeri (il primo o il
secondo) sia maggiore
• stampi il valore di tale numero.
*/

#include <stdio.h>
#include <stdlib.h>

    int main(void){

        int n1, n2;

            printf("Inserisci il primo numero\n");
            scanf("%d", &n1);
            printf("Inserisci il primo numero\n");
            scanf("%d", &n2);

                if (n1 > n2)
                {
                    printf("Il primo numero inserito : %d e' piu' grande del secondo : %d\n", n1, n2);
                    
                }
                else if (n1 < n2)
                {
                    printf("Il secondo numero inserito : %d e' piu' grande del primo : %d\n", n2, n1);
                    
                }
                else{
                    printf("Il primo numero inserito ed il secondo sono uguali\n");   
                }
                
    }