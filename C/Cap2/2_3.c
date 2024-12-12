/*Si realizzi un programma in linguaggio C che acquisisca da tastiera un numero e stampi il
valore assoluto di tale numero.*/

#include <stdio.h>
#include <stdlib.h>     //Per la funzione abs

    int main(void){
        
        int n;
            printf("Inserisci il numero da cui ricavare il valore assoluto:\n");
            scanf("%d", &n);
            printf("Il valore assoluto di %d e' %d\n", n, abs(n));
    }