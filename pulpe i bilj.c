#include<stdio.h>

int bilj(float kg)
{
    int br=kg*1000/100;
    return br;
}

int main()
{
    float kile;
    int broj;
    printf("Unesi koliko kg pulpe: ");
    scanf("%f",&kile);
    broj=bilj(kile);
    printf("od %.2f kg dobije se %d bilj", kile, broj);
    return 0;
}

