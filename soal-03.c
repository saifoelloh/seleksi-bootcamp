#include <stdio.h>

void drawLine(int amout);

int main(int argc, char *argv[])
{
    int x;

    printf("Masukan banyak kolom dan baris ");
    scanf("%i", &x);

    drawLine(x);

    return 0;
}

void drawLine(int amout) {
    int i, j;
    for (i=0;i<amout;i++) {
        for (j=0;j<=i;j++)
            j==i ? printf("*") : printf(" ");
        printf("\n");
    }
}
