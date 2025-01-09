#include <stdio.h>
#include <stdlib.h>

    int main(void){
        
        int a;  //Dichiarazione numero
        int previous, next;     //Dichiarazione numero precedente e successivo

            printf("Inserisci il numero: \n");
            scanf("%d", &a);

            previous = a - 1;   //Formula numero precedente
            next = a + 1;       //Formula numero successivo

                printf("Numero precedente: %d\n", previous);
                printf("Numero successivo: %d\n", next);

        return 0;
    }