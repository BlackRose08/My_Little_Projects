#include <stdio.h>

int main() {
    int dim;

    // Chiediamo all'utente la dimensione dell'array
    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &dim);

    int a[dim];  // Dichiarazione dell'array con n elementi
    int max, max_pos;

    // Chiediamo all'utente di inserire i valori dell'array
    printf("Inserisci %d valori per l'array:\n", dim);
    for (int i = 0; i < dim; i++) {
        scanf("%d", &a[i]);
    }

    // Inizializziamo il massimo con il primo valore dell'array
    max = a[0];

    // Troviamo il valore massimo nell'array
    for (int i = 1; i < dim; i++) {
        if (a[i] > max) {
            max = a[i];  // Aggiorna il massimo se trovi un valore maggiore
            max_pos = i; //Per aggiornare la posizione del valore massimo
        }
    }

    // Stampiamo il risultato
    printf("Il valore massimo e': %d\n", max);
    printf("Posizione: %d\n", max_pos);

    return 0;
}
