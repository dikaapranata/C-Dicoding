/* File: Latihan.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */
/* LATIHAN */

#include <stdio.h>
#include <stdlib.h>

int jarak(int v, int t) {
    return (v*t);
}

int Lpersegi(int s) {
    return (s*s);
}

int Vkubus(int s) {
    return (s*s*s);
}

int main()
{
    int s;
    printf("Menghitung volume kubus\n\n");
    printf("Masukkan sisi kubus: ");
    scanf("%d", &s);
    printf("Volume kubus adalah %d", Vkubus(s));


    return 0;
}
