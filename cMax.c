//Nama File: cMax.c
//Nama Pembuat  : Handhika Pranata Kusuma Wardana

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int Tab[10] = {25, 19, 25, 25, 21, 25, 24, 10, 7, 25};
    int i;
    int min = Tab[0];
    int max = Tab[0];
    int cMax;
    /* Algoritma */

    /* MAX */
    for (i=0; i<10; i++) {
        if (Tab[i] > max) {
            max = Tab[i];
            cMax = 1;
        }
        else if (Tab[i] == max) {
            cMax++;
        }
    }

    printf("Umur maksimal adalah %d \n", max);
    printf("Orang dengan umur maksimal berjumlah %d \n", cMax);
    return 0;

}
