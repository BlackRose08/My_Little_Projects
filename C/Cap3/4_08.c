/*
Si realizzi un programma che, dati due valori B (numero reale, detto ‘base’) ed E (numero
intero positivo, detto ‘esponente’), calcoli e stampi il valore reale di BE (base elevato ad
esponente). Non si utilizzi la funzione pow() ma si adotti il metodo delle moltiplicazioni
successive.
Esempio:
Inserisci B: 3.5
Inserisci E: 4
Risultato B^E = 150.06
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float b, e, ris;  // Dichiarazione delle variabili: b (base), e (esponente), ris (risultato)

    // Chiede all'utente di inserire la base
    printf("Inserisci la base\n");
    scanf("%f", &b);  // Legge il valore della base come numero reale

    // Chiede all'utente di inserire l'esponente
    printf("Inserisci l'esponente\n");
    scanf("%f", &e);  // Legge il valore dell'esponente come numero reale

    // Inizializza il risultato a 1 (poiché qualsiasi numero elevato a 0 è 1)
    ris = 1;

    // Esegue il ciclo per calcolare il valore di base elevata all'esponente
    // Moltiplica la base b per se stessa 'e' volte
    for (int i = 0; i < e; i++) {
        ris *= b;  // Moltiplica ris per la base ad ogni iterazione
    }

    // Stampa il risultato finale
    // La base e l'esponente sono stampati con 2 decimali, e il risultato con 2 decimali
    printf("%.2f ^ %.2f = %.2f\n", b, e, ris);

}
