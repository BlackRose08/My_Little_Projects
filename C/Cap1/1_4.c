#include <stdio.h>
#include <stdlib.h>

    int main(void){

        float a, b;       //Dichiarazione numeri
        float media;    //Dichiarazione media con float (risultato con virgola)

            printf("Inserisci il primo numero: \n");
            scanf("%f", &a);
            printf("Inserisci il secondo numero: \n");
            scanf("%f", &b);

                media = (a + b) / 2;    //Formula media

                printf("La media dei due numeri  e': %f", media);

        return 0;
    }