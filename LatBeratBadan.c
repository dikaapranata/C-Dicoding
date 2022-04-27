/* File: Latihan.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */
/* LATIHAN */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char gender;
    int age;
    int weight;
    printf("Selamat datang di Aplikasi Menentukan Berat Badan!\n");
    printf("Apa jenis kelamin anda (L/P): "); scanf("%c", &gender);
    printf("Berapa usia anda: "); scanf("%d", &age);
    printf("Berapa berat badan anda: "); scanf("%d", &weight);

    if (gender == 'L') {
        if (age > 18) {
            if (weight >= 50 && weight <= 80) {
                printf("Anda memiliki berat badan normal");
            }
            else if (weight < 50) {
                printf("Anda memiliki berat badan di bawah normal");
            } else {
                printf("Anda memiliki berat badan di atas normal");
            }
        } else {
            if (weight >= 30 && weight <= 60) {
                printf("Anda memiliki berat badan normal");
            }
            else if (weight < 30) {
                printf("Anda memiliki berat badan di bawah normal");
            } else {
                printf("Anda memiliki berat badan di atas normal");
            }
        }
    } else if (gender == 'P') {
        if (age > 18) {
            if (weight >= 40 && weight <= 70) {
                printf("Anda memiliki berat badan normal");
            }
            else if (weight < 40) {
                printf("Anda memiliki berat badan di bawah normal");
            } else {
                printf("Anda memiliki berat badan di atas normal");
            }
        } else {
            if (weight >= 20 && weight <= 50) {
                printf("Anda memiliki berat badan normal");
            }
            else if (weight < 20) {
                printf("Anda memiliki berat badan di bawah normal");
            } else {
                printf("Anda memiliki berat badan di atas normal");
            }
        }
    return 0;
    }
}
