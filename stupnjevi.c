#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F;
    float C;
    float K;
    printf("Upisi Fn stupnjeve");
    scanf("%d", &F);

    C=((float)F-32)*5/9;
    K=C+273.15;

    printf("temperatura u C stupnjevima je %.2f\n", C);
    printf("temperatura u K je %.2f\n", K);


return 0;

}
