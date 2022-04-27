/* File: max.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int Tab[10] = {1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100};
    int i;
    int max = 0;
    /* Algoritma */
    for (i=0; i<10; i++) {
        if (Tab[i] > max) {
            max = Tab[i];
        }
    }

    printf("Nilai MAX dari tabel adalah: %d", max);
    return 0;

}
