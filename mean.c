/* File: max.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int Tab[10] = {1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100};
    int i;
    int sum = 0;
    int mean;
    /* Algoritma */
    for (i=0; i<10; i++) {
        sum += Tab[i];
    }
    mean = sum/10;
    printf("Jumlah dari tabel adalah: %d \n", sum);
    printf("Nilai rata-rata dari tabel adalah: %d", mean);
    return 0;

}
