//Nama File: bacaNum.c
//Nama Pembuat  : Handhika Pranata Kusuma Wardana

#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* Kamus */
  int a;
  float x;

  /* Program */
  printf("Contoh membaca dan menulis, ketik nilai integer: ");
  scanf("%d", &a); /*  nilai a yang bertype integer perhatikan bahwa nama variabel ditulis dengan &a */
  printf("Nilai yang dibaca: %d \n", a);

  printf("Ketik nilai dari sebuah bilangan riil: ");
  scanf("%f", &x);
  printf("Nilai yang dibaca: %f \n", x);

  return 0;
}

    /* Kesimpulan */
    /* %d untuk integer, %f untuk real */
