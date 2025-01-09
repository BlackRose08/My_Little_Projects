/*
Dato un numero reale positivo Y immesso da tastiera, si scriva un programma in linguaggio C che determini qual è il massimo numero intero positivo X tale per cui sia valida la
relazione
X ^ X ≤ Y
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int x, y;       // Dichiarazione delle variabili x (il numero intero) e y (il numero reale positivo)

    // Chiede all'utente di inserire il valore di X
    printf("Inserisci X\n");
    scanf("%d", &x);

    // Chiede all'utente di inserire il valore di Y
    printf("Inserisci Y\n");
    scanf("%d", &y);

    // Verifica se Y è negativo
    if (y < 0)      // Se y è minore di 0, il programma mostra un errore
    {
        printf("Il numero deve essere positivo\n");   // Messaggio di errore per Y negativo
    }

    // Se Y è positivo
    else if (y > 0)     // Se y è maggiore di 0
    {
        // Incrementa X finché X^X non supera Y
        while ((x + 1) * (x + 1) <= y)      // Incrementa x e calcola il suo esponente finché il quadrato di x non è maggiore di y
        {
            x++;   // Incrementa x
        }
    }

    // Stampa il valore massimo di X tale che X^X <= Y
    printf("Il massimo numero intero X tale che X^2 <= Y e': %d\n", x);  // Stampa il risultato

}
