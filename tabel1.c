/* File: tabel1.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int Tab[5] = {1, 2, 3, 4, 5};
    float TabX[3] = {1.5, 3.5E2, 9.99};
    char Tabchar[4] = {'1', '2', '@', 'Z'};

    int i; /* untuk interasi indeks tabel */
    /* Algoritma */
    /* Tab */
    for (i=0; i<5; i++) {
        printf("Tab[%d] = %d", i, Tab[i]);
        printf("\n");
    }
    printf("\n");
    /* TabX */
    for (i=0; i<3; i++) {
        printf("TabX[%d] = %f", i, TabX[i]);
        printf("\n");
    }
    printf("\n");
    /* Tabchar */
    for (i=0; i<4; i++) {
        printf("Tabchar[%d] = %c", i, Tabchar[i]);
        printf("\n");
    }

}
