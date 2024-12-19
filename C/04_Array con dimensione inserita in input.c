#include <stdio.h>

    int main(void){

        int dim, cont, i;
        int a[dim];
        i = 0;
        cont = 0;

        printf("Inserisci la dimensione dell'array \n");
        scanf("%d", &dim);
    
        for (i = 0; i < dim; i++)
        {
            printf("Inserisci il valore dell'array\n");
            scanf("%d", &a[i]); 
        }
        
        for (i = 0; i < dim; i++)
        {
            if (a[i] % 2 != 0) 
            {
                cont = cont + 1;
            }
    
        }
       
        printf("I numeri dispari presenti nell'array sono: %d\n", cont);
    }
