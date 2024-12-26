/*
Si scriva un programma in linguaggio C che acquisisca un numero intero positivo N da
tastiera e stampi il valore del fattoriale di N.
Suggerimento. Si ricorda che il fattoriale di un numero è il prodotto di tutti i numeri
compresi tra 1 ed N.
N! = 1 · 2 · 3 · . . . · (N − 1) · N
Inoltre 0! = 1.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    // Dichiarazione delle variabili
    int n, n1, n_factorial_temp, n_factorial_final = 1;

    // Acquisizione dell'input da tastiera
    printf("Inserisci un numero\n");
    scanf("%d", &n);

    // Inizializzazione della variabile n1
    n1 = 0;

    // Ciclo per calcolare il fattoriale
    for (int i = 0; i < n; i++) {
        // Calcolo temporaneo del fattoriale
        n_factorial_temp = (n - n1) * 1;
        
        // Moltiplicazione del valore parziale del fattoriale
        n_factorial_final = n_factorial_final * n_factorial_temp;

        // Incremento di n1
        n1 += 1;             
    }
    
    // Stampa del risultato finale del fattoriale
    printf("Il numero fattoriale di %d e': %d", n, n_factorial_final);

}
