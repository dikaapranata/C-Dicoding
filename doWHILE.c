/* File: doWHILE.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int i = 1;
    int n;

    /* Algoritma */
    printf("Mengetik Hello World! sebanyak n kali. \n");
    printf("Ketikkan nilai n: ");
    scanf("%d", &n);
    do {
        printf(" %d Hello World!\n", i);
        i++;
    } while (i <= n);

    return 0;
}
