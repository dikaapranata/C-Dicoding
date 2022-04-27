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
    /* Algoritma */
    for (i=0; i<10; i++) {
        if (Tab[i] < min) {
            min = Tab[i];
        }
    }

    printf("Nilai MIN dari tabel adalah: %d", min);
    return 0;

}
