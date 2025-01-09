/*Scrivere un programma che legga da tastiera un numero (N) e che stampi:
• se N è un numero positivo, stampi ****
• se N è un numero negativo, stampi $$$$
Nota Poiché il testo non specifica cosa fare se N=0, vi sono 3 possibili soluzioni:
1. se N=0, non stampare nulla
2. se N=0, stampa entrambe le righe
3. se N=0, trattalo come se fosse >0
*/

#include <stdio.h>
#include <stdlib.h>

    int main(void){
        int n, scelta;     //Dichiarazione numero e scelta alternativa di risultato in caso n == 0

            printf("Inserisci un numero: \n");
            scanf("%d", &n);

            if (n > 0)
            {
                printf("****\n");
            }
            else if (n == 0)
                {
                    printf("Ci sono tre possibilita' di risultato. Digita:\n '1' Non stampare nulla\n '2' Stampa entrambe le righe\n '3' trattalo come se fosse >0\n");
                    scanf("%d", &scelta);
                    switch (scelta)
                    {  
                        case 1:     //Non stampare nulla
                            break;

                        case 2:     //Stampa entrambe le righe
                            printf("****\n$$$$");
                            break;

                        case 3:     //Considera come se fosse un numero positivo
                            printf("****\n");
                            break;
                        
                        default:
                            printf("Scelta non riconosciuta\n");
                            break;
                    }
                
                }
            else{
                printf("$$$$");
            }
    }