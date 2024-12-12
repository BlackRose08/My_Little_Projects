#include <stdio.h>
#include <stdlib.h>
    
    int somma(int, int);
    int differenza(int, int);
    int moltiplicazione(int, int);
    float divisione(float, float);
        
        int num1, num2;

            int main(void){

                float ris;
                char op;
                printf("Indica quale tipo di operazione effettuare: \n");
                printf("s. Somma\n");
                printf("d. Differenza\n");
                printf("m. Moltiplicazione\n");
                printf("i. Divisione\n");
                scanf(" %c", &op);
                switch (op)
                {
                case 's':
                printf("Inserisci i numeri da operare: \n");
                scanf("%d", &num1);
                scanf("%d", &num2);
                    ris = somma(num1, num2);
                    printf("%d + %d = %f\n", num1, num2, ris);
                    break;
                case 'd':
                printf("Inserisci i numeri da operare: \n");
                scanf("%d", &num1);
                scanf("%d", &num2);
                    ris = differenza(num1, num2);
                    printf("%d - %d = %f\n", num1, num2, ris);
                    break;
                case 'm':
                printf("Inserisci i numeri da operare: \n");
                scanf("%d", &num1);
                scanf("%d", &num2);
                    ris = moltiplicazione(num1, num2);
                    printf("%d * %d = %f\n", num1, num2, ris);
                    break;
                case 'i': //Division
                printf("Inserisci i numeri da operare: \n");
                scanf("%d", &num1);
                scanf("%d", &num2);
                    ris = divisione(num1, num2);
                    printf("%d / %d = %f\n", num1, num2, ris);
                    break;
                default:
                    printf("Nessuna operazioni riconosciuta\n");
                    break;
                }
            }

    int somma(int num1, int num2){
        return num1 + num2;
    }

    int differenza(int num1, int num2){
        return num1 - num2;
    }

    int moltiplicazione(int num1, int num2){
        return num1 * num2;
    }

    float divisione(float num1, float num2){
        return num1 / num2;
    }