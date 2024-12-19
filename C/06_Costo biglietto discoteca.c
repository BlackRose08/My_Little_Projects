#include <stdio.h>

    int main(void){
        
        const int costo_min = 15;   //Constante costo per minorenni
        const int costo_mag = 18;   //Constante costo per maggiorenni
        const int costo_agg = 7;    //Costante costo aggiuntivo 
        int n_mag, n_min, tot_min, tot_max, n_tot, n_tot2, agg, tot;
            
        printf("Inserisci il numero dei maggiorenni\n");
        scanf("%d", &n_mag);
        printf("Inserisci il numero dei minorenni\n");
        scanf("%d", &n_min);

        n_tot = n_mag + n_min;

        //Metà delle persone
        n_tot2 = n_tot / 2;
        //Totale costo aggiuntivo di metà persone
        agg = n_tot2 * costo_agg;

        printf("Numero totale ragazzi entrati: %d\n", n_tot);

        //Totale incassato per i maggiorenni + consumazione aggiuntiva per metà partecipanti
        tot_max = costo_mag * n_mag;

        //Totale incassato per i maggiorenni + consumazione aggiuntiva per metà partecipanti
        tot_min = costo_min * n_min;

        printf("Incasso maggiorenni: %d\n", tot_max);
        printf("Incasso minorenni: %d\n", tot_min);

        //Incasso totale
        tot = tot_max + tot_min + agg;
        printf("Incasso totale: %d\n", tot);
        
    }