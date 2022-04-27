/* File: max.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int Tab[10] = {1, 50 , 6 , 200, 3, 100, 30, 8, 99, -5};
    int i;
    int min = Tab[0];
    int max = Tab[0];
    /* Algoritma */
    /* MIN */
    for (i=0; i<10; i++) {
        if (Tab[i] < min) {
            min = Tab[i];
        }
    }

    /* MAX */
    for (i=0; i<10; i++) {
        if (Tab[i] > max) {
            max = Tab[i];
        }
    }

    /* MEDIAN */
    int median = (min + max) / 2;

    printf("Nilai MIN dari tabel adalah: %d \n", min);
    printf("Nilai MAX dari tabel adalah: %d \n", max);
    printf("Nilai MEDIAN dari tabel adalah: %d \n", median);
    return 0;

}
