#include <stdio.h>

    int main(void){
        int n;      //Numero da inserire
        printf("Inserisci il numero:\n");
        scanf("%d", &n);

            if (n % 2 == 0)      
            {
                printf("Il numero e' pari\n");      //Il numero è pari perchè diviso 2 da resto 0
            }
            else{
                printf("Il numero e' dispari\n");   //Il numero è dispari perchè diviso 2 da resto
            }
            
    }