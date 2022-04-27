/* File: Latihan.c */
/* Pembuat: Handhika Pranata Kusuma Wardana */
/* LATIHAN */

#include <stdio.h>
#include <stdlib.h>


int Lpersegi(int s) {
    return (s*s);
}

int Kpersegi(int s) {
    return (4*s);
}

int Ksegitiga(int a, int b, int c) {
    return (a+b+c);
}

int Lsegitiga(int a, int t) {
    return ((a*t)/2);
}

int LpPanjang(int p, int l) {
    return (p*l);
}

int KpPanjang(int p, int l) {
    return (2*(p+l));
}

int Lbketupat(int d1, int d2) {
    return ((d1*d2)/2);
}

int Kbketupat(int s) {
    return (4*s);
}

float Llingkaran(float d) {
    const float pi = 3.14;
    return (pi*(d/2)*(d/2));
}

float Klingkaran(float d) {
    const float pi = 3.14;
    return (d*pi);
}

int main()
{
    for(;;){
    int x = 0;
    char check;
    printf("Selamat datang di program menghitung keliling dan luas!\n");
    printf("Pilih bangun yang ingin anda hitung.\n");
    printf("1. Persegi\n");
    printf("2. Persegi panjang\n");
    printf("3. Lingkaran\n");
    printf("4. Segitiga\n");
    printf("5. Belah ketupat\n");
        for(;;){
        printf("Pilih bangun: "); scanf("%d", &x);
            if(x==1) {
                printf("\nAnda memilih persegi\n");
                int s;
                printf("\nMasukkan sisi dari persegi: "); scanf("%d", &s);
                printf("\nLuas dari perseginya adalah: %d\nKelilingnya adalah: %d\n", Lpersegi(s), Kpersegi(s));
                break;
            } else if (x==2) {
                printf("Anda memilih persegi panjang\n");
                int p, l;
                printf("\nMasukkan panjang dari persegi panjang: "); scanf("%d", &p);
                printf("\nMasukkan lebar dari persegi panjang: "); scanf("%d", &l);
                printf("\nLuas dari persegi panjangnya adalah: %d\nKelilingnya adalah: %d\n", LpPanjang(p,l), KpPanjang(p,l));
                break;
            } else if (x==3) {
                printf("Anda memilih lingkaran\n");
                float d;
                printf("\nMasukkan diameter dari lingkaran: "); scanf("%f", &d);
                printf("\nLuas dari lingkarannya adalah: %f\nKelilingnya adalah: %f\n", Llingkaran(d), Klingkaran(d));
                break;
            } else if (x==4) {
                printf("Anda memilih segitiga\n");
                int a, t;
                printf("\nMasukkan alas segitiga: "); scanf("%d", &a);
                printf("\nMasukkan tinggi segitiga: "); scanf("%d", &t);
                printf("\nLuas dari segitiga adalah: %d\n", Lsegitiga(a,t));
                break;
            } else if (x==5) {
                printf("Anda memilih belah ketupat\n");
                int d1, d2;
                printf("\nMasukkan diagonal pertama: "); scanf("%d", &d1);
                printf("\nMasukkan diagonal kedua: "); scanf("%d", &d2);
                printf("\nLuas dari belah ketupat adalah: %d\n", Lbketupat(d1, d2));
                break;
            }
            else {
            printf("Masukkan input yang valid!\n");
            }
        }
    printf("Apakah anda ingin menggunakan aplikasi ini lagi? (y/n): ");
    scanf(" %c", &check);
    if (check == 'y' || check == 'Y') {
        printf("\n============================\n\n");
    } else if (check == 'n' || check == 'N') {
        printf("\n============\nKeluar dari aplikasi. Terima kasih sudah menggunakan!\n");
        break;
    } else {
        printf("Input tidak valid!\nMasukkan Hanya (y) atau (n): "); scanf("  %c", &check);
            if (check == 'y' || check == 'Y') {
            printf("\n============================\n\n");
        } else if (check == 'n' || check == 'N') {
            printf("\n============\nKeluar dari aplikasi. Terima kasih sudah menggunakan!\n");
            break;
    }
    }
    }
    return 0;
    }
