#include <stdio.h>
#include <stdlib.h>

void hitungKembalian(int money, int payload);

int main(int argc, char *argv[])
{
    int money, payload;
    printf("Masukan banyak uang: ");
    scanf("%i", &money);
    printf("Masukan pembayaran: ");
    scanf("%i", &payload);

    hitungKembalian(money, payload);
    return 0;
}

void hitungKembalian(int money, int payload) {
    int i = 0;
    int kembali = money - payload;
    int susuk[7][2] = {
        {50000,0},
        {20000,0},
        {10000,0},
        {5000, 0},
        {2000, 0},
        {1000, 0},
        {500,  0},
    };

    do {
        i = 0;
        do {
            if (kembali>=susuk[i][0]) {
                susuk[i][1] = kembali / susuk[i][0];
                kembali %= susuk[i][0];
            }
            i++;
        } while (i<7);
    } while(kembali!=0 && kembali<0);

    printf("Jadi hasil belanja anda tersisa Rp. %i,00\n", kembali);
    for (i=0;i<7;i++)
        if (susuk[i][1] > 0)
            printf("Rp. %i,00 sebanyak %i lembar\n", susuk[i][0], susuk[i][1]);
}
