/* File: random.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    const int MIN = 1;
    const int MAX = 100;

    for (int i = 0; i < 5; i++) {
        printf(" %d \n", rand()%MAX+MIN);
    }

    return 0;
}
