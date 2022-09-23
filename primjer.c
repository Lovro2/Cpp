#include<stdio.h>

float trosakPretplate(int N,float x) //definicija funkcije
{
    return N*x;
}
void trosakPretplate2(int *N, float *x, float *rez)
{
    *rez=*N * *x;
}
/*float trosakPretplate3(int N, float x=15.99) //definicija funkcije
{
    returnN*x;
}*/
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
    trosakPretplate2(&brPrijatelja, &cijena, &trosak);
    printf("\nminimalni trosak pretplate iznosi %.2f", trosak);

    //trosak = trosakPretplate(brPrijatelja);
    // poziv funkcije sazadanim argumentom
    return 0;
}

