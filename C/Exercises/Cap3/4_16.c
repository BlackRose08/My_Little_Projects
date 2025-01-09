/*
Si scriva un programma in linguaggio C per calcolare il minimo comune multiplo (MCM)
di due numeri interi positivi. Dati due numeri interi N1 e N2, il minimo comune multiplo
è il più piccolo numero M che è divisibile (con resto pari a zero) sia per N1 che per N2.
Suggerimento. Si considerino due numeri interi N1 e N2. Sia N1 più grande di N2. Il MCM
è il primo multiplo di N1 che è divisibile (con resto uguale a zero) per N2.
*/

#include <stdio.h>
#include <stdlib.h>

    int main(void){

        int n1, n2;
        int mcm, mult1 , mult2 = 0, i2 = 1;

            // Richiesta e lettura del primo numero
            printf("Inserisci il primo numero\n");
            scanf("%d", &n1);

            // Richiesta e lettura del secondo numero
            printf("Inserisci il secondo numero\n");
            scanf("%d", &n2);

        if (n1 > n2)
        {
            for (size_t i = 1; i <= n1; i++)
            {
                mult1 = n1 * i;
                printf("%d\n", mult1);

                if (mult1 > mult2)
                {
                    mult2 = n2 * i;
                }

                if (mult1 == mult2)
                {
                    i <= n1;
                }
                        
            }
        }

        mcm = mult1 && mult2;

        printf("%d", mcm);
        
            
            
    }