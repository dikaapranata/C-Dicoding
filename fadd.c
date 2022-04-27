/* File: fadd.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

int add (int a, int b) {
    return (a+b);
}

int inkremen (int a) {
    return (a+1);
}

int main()
{
    /* Kamus */
    int x = 10;
    int y = 25;

    /* Pemakaian fungsi add */
    printf("Hasil penjumlahan x + y = %d \n", add(x,y));
    printf("Hasil penjumlahan x + y = %d \n", add(3,2));

    /* Pemakaian fungsi inkremen */
    printf("Nilai x: %d\n",x);
    printf("Nilai x setelah ditambah 1: %d \n", inkremen(x));
    printf("Nilai 5 setelah ditambah 1: %d \n", inkremen(1));

    return 0;
}
