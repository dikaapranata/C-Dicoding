/* File: .c */
/* Pembuat: Handhika Pranata Kusuma Wardana */

#include <stdio.h>
#include <stdlib.h>

int jarak(int v, int t) {
    return (v*t);
}

int main()
{
    /* Kamus */
    int v;
    int t;
    printf("Menghitung jarak dari kota A ke kota B\n");
    printf("Masukkan kecepatan kendaraan (km): "); scanf("%d km", &v);
    printf("Masukkan waktu perjalanan (jam): "); scanf("%d", &t);
    printf("Jarak yang ditempuh adalah: %d km", jarak(v,t));

    return 0;
}
