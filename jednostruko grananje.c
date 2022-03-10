#include <stdio.h>

void main()
{
    int broj;

    printf("Unesi cijeli broj\n");
    scanf("%d", &broj);

    if(broj%2==1)
        printf("Broj je neparan\n");
    if(broj%2==0)
        printf("Broj je paran\n");

    return 0;
}
