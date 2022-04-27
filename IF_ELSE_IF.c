/* Nama File: IF_ELSE_IF.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int a;

    /* Program */
    printf("Contoh IF dua kasus \n");
    printf("Ketikkan suatu nilai integer: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Nilai %d positif\n", a);
    }
    else if (a == 0)
    {
        printf("Nilai adalah %d", a);
    }
    else
    {
    printf("Nilai %d negatif", a);
    }

    return 0;
}
