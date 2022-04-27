/* File: tabel2.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int Tab[5];
    int i;
    /* baca is Tab */
    for (i=0; i<5; i++) {
        if (i == 0){
            printf("Input sebuah angka ke dalam tabel: \n");
        }
        printf("Masukkan nilai ke-%d: ", i);
        scanf("%d", &Tab[i]);
    }

    /* Menuliskan isi Tab */
    for (i=0; i<5; i++) {
        if (i == 0) {
            printf("\nHasil dari inputan \n");
        }
        printf("Tab[%d] = %d; ", i, Tab[i]);
    }
    printf("\n");

    return 0;

}
