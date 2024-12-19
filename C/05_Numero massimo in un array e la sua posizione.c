#include <stdio.h>

    int main(void){
        
        int a[10];
        int max, i, pos;

        for (i = 0; i < 10; i++)
        {
            printf("Inserisci il valore dell'array: \n");
            scanf("%d", &a[i]);
        }

            max = a[0];

        for (i = 1; i < 10; i++)
        {
            if (a[i]>max)
            {
              max = a[i];
              pos = i; 
            }

        }
        
        printf("Il valore massimo: %d\n", max);
        printf("In posizione: %d", pos);
        
    }
