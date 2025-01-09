/*Si scriva un programma in linguaggio C capace di compiere le 4 operazioni (somma, sottrazione, moltiplicazione e divisione) tra due numeri reali inseriti da tastiera. Dopo che sono
stati inseriti i due numeri, detti A e B, il programma dovrà visualizzare i quattro valori
A+B, A-B, A*B, A/B. Si ipotizzi che A e B siano != 0 nella divisione, altrimenti dare messagio di errore*/

#include <stdio.h>
#include <stdlib.h>

    //Prototipi funzioni operazioni
    float somma(float, float);
    float sottrazione(float, float);
    float moltiplicazione(float, float);
    float divisione(float, float);

        float A, B;     //Variabili globali dei valori da calcolare
        
        int main(void){

                float ris;
                char op;

                printf("Scegliere tipo di operazione da effettuare. Digita:\n 's': Somma\n 'd': Differenza\n 'm': Moltiplicazione\n 'i': Divisione\n");
                scanf(" %c", &op);

                    //Scelta operazione
                    switch (op)
                    {
                        case 's':
                            printf("Inserisci il primo numero: \n");
                            scanf("%f", &A);
                            printf("Inserisci il secondo numero: \n");
                            scanf("%f", &B);
                            ris = somma(A, B);
                            printf("%f + %f = %f\n", A, B, ris);
                        break;
                        
                        case 'd':
                            printf("Inserisci il primo numero: \n");
                            scanf("%f", &A);
                            printf("Inserisci il secondo numero: \n");
                            scanf("%f", &B);
                            ris = sottrazione(A, B);
                            printf("%f - %f = %f\n", A, B, ris);
                        break;

                        case 'm':
                            printf("Inserisci il primo numero: \n");
                            scanf("%f", &A);
                            printf("Inserisci il secondo numero: \n");
                            scanf("%f", &B);
                            ris = moltiplicazione(A, B);
                            printf("%f * %f = %f\n", A, B, ris);
                        break;

                        case 'i':
                            printf("Inserisci il primo numero: \n");
                            scanf("%f", &A);
                            printf("Inserisci il secondo numero: \n");
                            scanf("%f", &B);

                            if (A == 0 || B == 0)
                            {
                                printf("Errore\n");
                            }

                            else{
                                ris = divisione(A, B);
                                printf("%f / %f = %f\n", A, B, ris);
                            } 

                        break;
                    
                        default:
                            printf("Operazione non riconosciuta\n");
                        break;
                    }

            
        }

    float somma(float A, float B){
            return A + B;
    }

    float sottrazione(float A, float B){
            return A - B;
    }

    float moltiplicazione(float A, float B){
            return A * B;
    }

    float divisione(float A, float B){
            return A / B;
    }