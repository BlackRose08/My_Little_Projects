/*
Dato un numero reale positivo Y immesso da tastiera, si scriva un programma in linguaggio C che determini qual è il massimo numero intero positivo X tale per cui sia valida la
relazione
X ^ X ≤ Y
*/

#include <stdio.h>
#include <stdlib.h>

    int main(void){

        int x, y;       //Dichiarazione x, e y

            printf("Inserisci X\n");
            scanf("%d", &x);
            printf("Inserisci Y\n");
            scanf("%d", &y);

                if (y < 0)      //Se y e' minore di 0 dare errore (deve essere positivo)
                {
                    printf("Il numero deve essere positivo\n");
                }

                else if (y > 0)     // Se y e' positivo
                {
                    while ((x + 1) * (x + 1) <= y)      //Incrementare x e il suo esponente fin quando il valore massimo di x sara' <= a y
                    {
                        x++;
                    }
                    
                }

                 printf("Il massimo numero intero X tale che X^2 <= Y e': %d\n", x);
                
                
    }