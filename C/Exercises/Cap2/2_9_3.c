/*
Si realizzi un programma in linguaggio C per risolvere equazioni di secondo grado. In
particolare, data una generica equazione di secondo grado nella forma:

ax2 + bx + c = 0

dove a, b, c sono coefficienti reali noti e x rappresenta l’incognita, il programma determini
le due radici x1 ed x2 dell’equazione data, ove esse esistano.
Si identifichino tutti i casi particolari (a = 0, ∆ ≤ 0, ...) e si stampino gli opportuni
messaggi informativi.
*/

#include <stdio.h>
#include <stdlib.h>
#include "math.h"

    int main(void){
        
        float a, b, c, delta, x1, x2;       //Dichiarazione coefficiente x2, x, numero noto, delta, risultato prima x e seconda x

            printf("Inserisci il coefficiente di ax2\n");
            scanf("%f", &a);
            printf("Inserisci il coefficiente di bx\n");
            scanf("%f", &b);
            printf("Inserisci il termine noto\n");
            scanf("%f", &c);

            //Casi tipi di equazione
            if (a != 0 && b != 0 && c != 0)     //Se tutti i numeri sono diversi da zero si calcola il delta (equazione completa)
            {
                 delta = (b * b) - 4*(a)*(c);       //Formula delta
                 printf("%f\n", delta);

                    //Casi risultato delta
                    if (delta < 0)              //Caso in cui delta e' minore di 0 (equazione impossibile)
                    {
                        printf("L'equazione non ha soluzioni reali, quindi e' impossibile\n");
                    }
                    else if (delta == 0)        //Caso in cui delta e' pari a 0
                    {
                        b = -b;
                        x1 = (b - sqrt(delta));
                        x1 = x1 / ( 2 * a);
                        x2 = (b + sqrt(delta));
                        x2 = x2 / ( 2 * a);
                        x2 = -x2;
                        printf("x1 vale: %.2f\n", x1);
                        printf("x2 vale: %.2f\n", x2);
                    }
                    else if (delta > 0)         //Caso in cui delta e' maggiore di 0
                    {
                        b = -b;
                        x1 = (b - sqrt(delta)) ;
                        x1 = x1 / ( 2 * a);
                        x2 = (b + sqrt(delta));
                        x2 = x2 / ( 2 * a);
                        printf("x1 vale: %.2f\n", x1);
                        printf("x2 vale: %.2f\n", x2);
                    }
                    
            }
            else {
                if (a == 0 && b != 0 && c != 0)     //Caso in cui a e' pari a 0 (equazione non di secondo grado)
                {
                    printf("L'equazione non e' di secondo grado ma di primo grado\n");
                }
                else if (b == 0 && a != 0 && c != 0)    //Caso in cui b e' uguale a 0 (equazione spuria)
                {
                    c = -c;
                    x1 = - (sqrt(c / a)) ;
                    x2 = + (sqrt(c / a));
                    printf("x1 vale: %.2f\n", x1);
                    printf("x2 vale: %.2f\n", x2);
                }
                else if (c == 0 && b != 0 && a != 0)    //Caso in cui c e' pari a 0 (equazione pura)
                {
                    x1 = 0;
                    x2 = - (b / a);
                    printf("x1 vale: %.2f\n", x1);
                    printf("x2 vale: %.2f\n", x2);
                }
                else if (a == 0 && b == 0 && c == 0)    //Caso in cui tutti i valori sono uguali a 0 (l'equazione non esiste)
                {
                    printf("L'equazione e' uguale a 0\n");
                }
                                
            }       
    }