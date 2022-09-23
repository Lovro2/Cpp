#include<stdio.h>

float trosakPretplate(int N,float x) //definicija funkcije
{
    return N*x;
}

int main()
{
    int brPrijatelja;
    float cijena,trosak;

    printf("Unesi broj prijatelja:");
    scanf("%d", &brPrijatelja);
    printf("Unesi cijenu pretplate:");
    scanf("%f", &cijena);
    trosak = trosakPretplate(brPrijatelja, cijena); //poziv funkcije
    printf("minimalni trosak pretplate iznosi %.2f", trosak);
    return 0;
}

