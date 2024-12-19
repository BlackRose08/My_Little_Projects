#include <stdio.h>

    int main(void){

        //Dichiarazione dimensione array e variabili
        int dim, i, max, max_pos, min, min_pos;

        //Richiesta dimensione
        printf("Inserisci la dimensione dell'array: ");
        scanf("%d", &dim);

        //Dichiarazione array
        int a[dim];

            //Richiesta inserimento valori array
            printf("Inserisci i valore dell'array: \n");
            
            //Ciclo inserimento valori
            for (i = 0; i < dim; i++)
            {
                scanf("%d\n", &a[i]);
            }

        //Assegnamento valore massimo al primo valore dell'array
        max = a[0];

        //Ciclo valore massimo
        for (i = 1; i < dim; i++)
        {
            if (max < a[i])
            {
                max = a[i]; //Per aggiornare il valore massimo
                max_pos = i; //Per aggiornare la posizione del valore massimo
            }
            
        }

        //Messaggio a video valore massimo
        printf("Il valore massimo e': %d\n", max);
        printf("Posizione: %d\n", max_pos);
        
        //Assegnamento valore minimo al primo valore dell'array
        min = a[0];

        //Ciclo valore massimo
        for (i = 1; i < dim; i++)
        {
            if (min > a[i])
            {
                min = a[i]; //Per aggiornare il valore minimo
                min_pos = i; //Per aggiornare la posizione del valore minimo
            }
            
        }

        //Messaggio a video valore minimo
        printf("Il valore minimo e': %d\n", min);
        printf("Posizione: %d\n", min_pos);

    }