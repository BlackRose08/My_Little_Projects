#include <stdio.h>

    int main(void){
        
        int eta, your_eta;      //Dichiarazione variabile età a cui ci può prendere la patente e variabile e tu
        

        printf("A quanti anni si puo' prendere la patente nel tuo Stato\n");
        scanf("%d", &eta);
        printf("Quanti hanni hai?\n");
        scanf("%d", &your_eta);

            if (your_eta >= eta)        //Se la tua età supera o è uguale all'età per poter guidare
            {
                printf("Puoi prendere la patente\n");   //Si può prendere la patente
            }
            else{
                printf("Non puoi prendere la patente\n");   //Altrimenti no
            }
            
    }