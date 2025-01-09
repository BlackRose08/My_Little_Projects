/*
Si scriva un programma in linguaggio C che legga da tastiera i valori delle lunghezze dei
tre lati di un triangolo (detti A, B e C), e determini:
• se il triangolo è equilatero
• se il triangolo è isoscele
• se il triangolo è scaleno
• se il triangolo è rettangolo.
*/

#include <stdio.h>
#include <stdlib.h>

    int main(void){

        int A, B, C;

            printf("Inserisci il primo lato del triangolo\n");
            scanf("%d", &A);
            printf("Inserisci il secondo lato del triangolo\n");
            scanf("%d", &B);
            printf("Inserisci il terzo lato del triangolo\n");
            scanf("%d", &C);

            //CASO TRIANGOLO RETTANGOLO (L'IPOTENUSA E' UGUALE ALLA SOMMA DEL QUADRATO DEI DUE CATETI) 

            if (A * A == (C * C) + (B * B) || B * B == (C * C) + (A * A) ||C * C == (A * A) + (B * B)){
            
                printf("Il triangolo e' rettangolo\n");
            }       
            
            //CASO TRIANGOLO ISOSCELE (DUE UGUALI E UNO DIVERSO)

                       //CASO "A" SIA DIVERSO        //CASO "B" SIA DIVERSO      //CASO "C" SIA DIVERSO
            else if (A != B && A != C && B == C || B != A && B != C && A == C || C != A && C != B && A == B)
            {
                printf("Il triangolo e' isoscele\n");
            }
            
            //CASO TRIANGOLO EQUILATERO (TUTTI I LATI UGUALI)
            else if (A == B && A == C && B == C)
            {
                printf("Il triangolo e' equilatero\n");
            }
            
            //CASO TRIANGOLO SCALENO (TUTTI I LATI DIVERSI)
            else if (A != B && B != C && C != A)
            {
                printf("Il triangolo e' scaleno\n");

            }
            
            
    }
