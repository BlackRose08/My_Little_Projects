#include <stdio.h>

    int main(void){
        float stipendio;    //Dichiarazione stipendio
        int eta;            //Dichiarazione anni di servizio

            printf("Inserisci stipendio\n");
            scanf("%f", &stipendio);

            
                if (stipendio >= 5000)      //Se lo stipendio e' uguale o maggiore di 5000 rimane invariato
                {
                    printf("Lo stipendio rimane a %.2f\n", stipendio);
                }
                else if (stipendio < 5000)  //Se lo stipendio e' minore di 5000 
                {
                    printf("Quanti hanni di servizio hai?\n");
                    scanf("%d", &eta);      //Inserisci anni di servizio
                }
                if (eta < 10)       //Se hai meno di 10 anni di servizio, lo stipendio viene ridotto del 12%
                {
                    stipendio = stipendio - ((stipendio * 12) /100);
                    printf("Stipendio: %.2f \n", stipendio);
                }
                else if (eta >= 10 && eta <= 30)        //Se hai anni di servizio compresi tra 10 anni(compreso) e 30 lo stipendio viene ridotto del 8%
                {       
                    stipendio = stipendio - ((stipendio * 8) /100);
                    printf("Stipendio: %.2f \n", stipendio);
                }
                else if (eta > 30)
                {
                    stipendio = stipendio - ((stipendio * 4) /100);     //Se hai piu' di 30 anni di servizio lo stipendio viene ridotto solo del 4%
                    printf("Stipendio: %.2f \n", stipendio);
                }
                
                }
                                
                
            
           
            
            