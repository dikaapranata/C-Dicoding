/* File: for.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int i;
    int n;

    /* Algoritma */
    printf("Mengetik Hello World! sebanyak n kali. \n");
    printf("Ketikkan nilai n: ");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        printf("Hello World!\n");
    }

    return 0;
}
