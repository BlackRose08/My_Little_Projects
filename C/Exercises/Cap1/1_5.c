#include <stdio.h>
#include <stdlib.h>
#include <math.h>   //Libreria operazioni matematiche (sqrt per radice quadrata) 

//Prototipi funzioni aree
float areaqu(float);
float areace(float, float);
float areatr(float);

float r;    //Dichiarazione raggio cerchio per ricavare l'area

        int main(void){

            float d, areaq, areac, areat, ris;    //Dichiarazione lato, area quadrato, cerchio, triangolo e risultato operazione
            int op;    //Tipo di operazione
            
            printf("Inserisci il valore del lato della figura: \n");
            scanf("%f", &d);

            printf("Cosa vuoi calcolare? Digita: \n '1' Area quadrato \n '2' Area cerchio \n '3' Area triangolo \n");
            scanf("%d", &op);
            
            switch (op)
            {
            case 1:
                ris = areaqu(d);
                printf("L'area del quadrato e': %f\n", ris);
                break;
            case 2:
                ris = areace(d, r);
                printf("L'area del cerchio e': %f\n", ris);
                break;
            case 3:
                ris = areatr(d);
                printf("L'area del triangolo e': %f\n", ris);
                break;
            
            default:
                printf("Nessuna operazione riconosciuta\n");
                break;
            }

            return 0;
        }

float areaqu(float d){
    return d * d;
}

float areace(float d, float r){
    r = d / 2;
    return 3.14 * r * r;
}

float areatr(float d){
    return (sqrt(3) /4) * d * d;
}