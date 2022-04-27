//Nama File: boolOP.c
//Nama Pembuat  : Handhika Pranata Kusuma Wardana

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int TRUE=1;
    int FALSE=0;
    char batas [] = "---------\n";

    /* Algoritma */
    printf(batas);
    printf("OR  T  F\n");
    printf("T   %d  %d\n", TRUE || TRUE, TRUE || FALSE);
    printf("F   %d  %d\n", FALSE || TRUE, FALSE || FALSE);
    printf(batas);
    printf("\n");
    printf(batas);
    printf("AND  T  F\n");
    printf("T    %d  %d\n", TRUE && TRUE, TRUE && FALSE);
    printf("F    %d  %d\n", FALSE && TRUE, FALSE && FALSE);
    printf(batas);
    printf("\n");
    printf(batas);
    printf("NOT  T  F\n");
    printf("     %d  %d\n", !TRUE, !FALSE);
    printf(batas);


    return 0;
}
