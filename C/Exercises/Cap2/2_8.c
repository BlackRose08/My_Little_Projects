/*
Si scriva un programma in linguaggio C che implementi una semplice calcolatrice in grado
di compiere le 4 operazioni (+ − × ÷) tra numeri interi.
Il programma presenti un semplice menù da cui l’utente indichi (con un numero tra 1 e
4) l’operazione da svolgere. In seguito il programma acquisirà da tastiera i due operandi e
stamperà il risultato dell’operazione.
*/

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