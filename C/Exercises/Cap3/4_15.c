/*
Si scriva un programma in linguaggio C per calcolare il massimo comun divisore (MCD) di
due numeri interi positivi. Il MCD è definito come il massimo tra i divisori comuni ai due
numeri.
Suggerimento. Si considerino due numeri interi N1 e N2. Il MCD di N1 e N2 è il massimo
tra i numeri che sono divisori (con resto uguale a zero) sia di N2 che di N1. In particolare,
si supponga che sia N1 minore di N2. Il MCD è il massimo tra i numeri compresi tra 1 e
N1 che sono divisori (con resto uguale a zero) sia di N1 che di N2.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n1, n2;  // Dichiarazione delle variabili per i numeri di input
    int MCD;  // Variabili per il risultato e il massimo comune divisore

    // Richiesta e lettura del primo numero
    printf("Inserisci il primo numero\n");
    scanf("%d", &n1);

    // Richiesta e lettura del secondo numero
    printf("Inserisci il secondo numero\n");
    scanf("%d", &n2);

    // Controllo se n1 è maggiore di n2. In tal caso, calcoliamo i divisori comuni fino a n1
    if (n1 > n2)
    {
        // Ciclo per trovare i divisori comuni tra n1 e n2
        for (size_t i = 1; i <= n1; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)  // Verifica se i è un divisore comune
            {
                MCD = i;  // Aggiorna il MCD con il divisore comune corrente
            }
        }
    }

    // Controllo se n2 è maggiore di n1. In tal caso, calcoliamo i divisori comuni fino a n2
    if (n2 > n1)
    {
        // Ciclo per trovare i divisori comuni tra n1 e n2
        for (size_t i = 1; i <= n2; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)  // Verifica se i è un divisore comune
            {
                MCD = i;  // Aggiorna il MCD con il divisore comune corrente
            }
        }
    }

    // Stampa il risultato: il massimo comune divisore
    printf("%d", MCD);

}
