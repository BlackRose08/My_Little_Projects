/*Scrivere un programma che richieda all’utente il prezzo di un oggetto, e la percentuale
di sconto ad esso applicata, e che stampi a video il cartellino con il prezzo (originale e
scontato).

Esempio:

Inserisci i dati:
Prezzo: 25
Sconto: 10
Cartellino:
Prezzo: 25.00 euro
Sconto applicato 10%
Prezzo finale: 22.50 euro*/

#include <stdio.h>
#include <stdlib.h>

    //Prototipo funzione sconto
    float sconto(float, float);

        int main(void){

            float prezzo, p_sconto, ptot;     //Dichiarazione variabile prezzo, percentuale sconto e prezzo totale con sconto

                printf("Inserisci il prezzo del prodotto: \n");
                scanf("%f", &prezzo);
                printf("Inserisci percentuale sconto in caso ci sia: \n");
                scanf("%f", &p_sconto);

                    ptot = sconto(prezzo, p_sconto);
                    printf("Prezzo finale \n %.2f euro - %.2f%% = %.2f\n", prezzo, p_sconto, ptot);     
        }

    float sconto(float prezzo, float p_sconto){
        return prezzo - (prezzo * (p_sconto / 100));
    }






























