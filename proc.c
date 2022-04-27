/* File: proc.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

void plus1 (int* a) {
    int temp;
    *a = *a + 1;
}

void plusd(int* a, int d) {
    int temp;
    *a = *a + d;
}

void swap (int* a, int* d) {
    int temp;
    temp = *a;
    *a = *d;
    *d = temp;
}

int main()
{
    int i = 9;
    int x = 10;
    int y = 25;
    int d = 7;

    plus1(&i);
    printf("Nilai i + 1: %d \n", i);

    plusd(&i, d);
    printf("Nilai i + 7: %d \n", i);

    plusd(&d, 3);
    printf("Nilai d + 3: %d \n", d);

    printf("nilai x dan y: %d, %d \n", x, y);
    swap(&x, &y);
    printf("nilai x dan y: %d, %d \n", x, y);


    return 0;
}
