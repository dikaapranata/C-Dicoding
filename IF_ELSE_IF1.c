/* File: IF_ELSE_IF1.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int day;
    int month;

    /* Program */
    printf("Hari dan bulan sekarang\n");
    printf("Ketikkan hari: ");
    scanf("%d", &day);
    if (day == 0)
    {
        printf("Hari Minggu\n");
    }
    else if (day == 1)
    {
        printf("Hari Senin\n");
    }
    else if (day == 2)
    {
        printf("Hari Selasa\n");
    }
    else if (day == 3)
    {
        printf("Hari Rabu\n");
    }
    else
    {
        printf("Ya pokoknya gitu \n");
    }

    printf("Ketikkan bulan: ");
    scanf("%d", &month);
    if (month == 1)
    {
        printf("Bulan Januari\n");
    }
    else if (month == 2)
    {
        printf("Bulan Februari\n");
    }
    else if (month == 3)
    {
        printf("Bulan Maret\n");
    }
    else if (month == 4)
    {
        printf("Bulan April\n");
    }
    else
    {
        printf("Ya pokoknya gitu \n");
    }




    return 0;
}
