#include <stdio.h>

int countHandShake(int amout);

int main(int argc, char *argv[])
{
    int amout;
    printf("Masukan jumlah orang: ");
    scanf("%i", &amout);

    printf("Jumlah jabat tangan adalah %i\n", countHandShake(amout));

    return 0;
}

int countHandShake(int amout)
{
    int i, j, result=0;

    for (i=0;i<amout;i++)
        for (j=0;j<i;j++)
            result++;

    return result;
}
