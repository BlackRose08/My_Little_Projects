#include <stdio.h>

    int main(void){

        //Dichiarazione array e index
        int a[10];
        int i, countp, countd;

        i = 0;
        countp = 0;
        countd = 0;

        for (i = 0; i <= 9; i++)
        {
            printf("Inserisci il valore dell'array \n");
            scanf("%d", &a[i]);
        }

        for (i = 0; i <= 9; i++)
        {
            if (a[i]%2 == 0)
            {
                countp = countp + 1;
            }
            else{
                countd = countd + 1;
            }
        }
        
        printf("I numeri pari sono: %d \n", countp);
        printf("I numeri dispari sono: %d \n", countd);
    }
