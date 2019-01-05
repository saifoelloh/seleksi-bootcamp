#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

bool checkPassword(char password[]);

bool hasil1, hasil2;
char masuk1[MAX],
     masuk2[MAX];

int main(int argc, char *argv[])
{
    strcpy(masuk1, "doscom2018");
    strcpy(masuk2, "D!nus0pensource");

    checkPassword(masuk2);

    printf("Password anda adalah %s\n", masuk1);
    printf("Memenuhi kriteria ?");
    checkPassword(masuk1) ? printf(" true\n") : printf(" false\n");

    printf("\n\n");

    printf("Password anda adalah %s\n", masuk2);
    printf("Memenuhi kriteria ?");
    checkPassword(masuk2) ? printf(" true\n") : printf(" false\n");

    return 0;
}

bool checkPassword(char password[]) {
    int i, j= strlen(password);
    bool kecil= 0, besar= 0, angka= 0, karakter= 0;

    if (strlen(password) < 8) {
        return false;
    } else {
        i = 0;
        do {
            if (password[i]>=48 && password[i]<=57) {
                angka = true;
            } else if (password[i]>=65 && password[i]<=90) {
                besar = true;
            } else if (password[i]>=97 && password[i]<=122) {
                kecil = true;
            } else if (password[i]==0) {
                j++;
            } else {
                karakter = true;
            }
            i++;
        } while(i<strlen(password));
    }

    if (angka && kecil && besar && karakter) {
        return true;
    } else {
        return false;
    }
}
