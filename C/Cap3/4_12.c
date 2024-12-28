/*
Si scriva un programma in linguaggio C che determini se, in una sequenza di numeri
inseriti da tastiera, vi sono due o più numeri consecutivi uguali.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int lun, num_precedente, num_corrente, cont = 0;

    // Chiede all'utente quanti numeri vuole inserire
    printf("Quanti numeri vuoi inserire?\n");
    scanf("%d", &lun);

    // Se l'utente inserisce 0, termina il programma
    if (lun == 0) {
        return 1;
    }

    // Chiede di inserire il primo numero
    printf("Inserisci il primo numero (i numeri devono essere consecutivi)\n");
    scanf("%d", &num_precedente);

    // Ciclo per inserire il resto dei numeri
    for (int i = 1; i < lun; i++) {
        printf("Inserisci un numero\n");
        scanf("%d", &num_corrente);
        
        // Verifica se il numero inserito è consecutivo al precedente o uguale ad esso
        if (num_corrente != num_precedente + 1 && num_corrente != num_precedente) {
            printf("Errore : I numeri devono essere consecutivi, riprova\n");
            return 1;  // Se la condizione non è soddisfatta, termina il programma
        }

        // Se i numeri sono uguali consecutivi, incrementa il contatore
        if (num_corrente == num_precedente) {
            cont += 2;  // Incrementa di 2 se i numeri sono uguali
        }

        // Aggiorna num_precedente per il prossimo ciclo
        num_precedente = num_corrente;
    }

    // Stampa il numero di numeri consecutivi uguali
    printf("I numeri consecutivi uguali almeno con un altro numero sono : %d", cont);

    return 0;
}
