/*Si realizzi un programma in linguaggio C che acquisisca da tastiera un numero e stampi
un messaggio che indichi se tale numero sia positivo oppure negativo.*/


#include <stdio.h>
#include <stdlib.h>

    int main(void){
        int n;      //Dichiarazione numero da verificare

            printf("Inserisci un numero: \n");
            scanf("%d", &n);

            if (n > 0)
            {
                printf("Il numero e' positivo \n");
            }
            else{
                printf("Il numero e' negativo");
            }
            
    }  