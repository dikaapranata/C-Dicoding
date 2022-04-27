//Nama File     : float.c
//Nama Pembuat  : Handhika Pranata Kusuma Wardana

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    float f = 0.555;
    float x = 1.5E1;
    int y = 5;
    float sum = f + y;
    /*Algoritma*/
    printf("Nilai f adalah %f \n", f);
    printf("Nilai f adalah %5.3f \n", f);
    printf("Nilai x adalah %60f \n", x);
    printf("Penjumlahan f dan y adalah %f \n", sum);
    return 0;
}
