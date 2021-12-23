#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int F1;
    int F2;

    printf("unesi F1 i F2\n");
    scanf("%d %d",&F1, &F2);

    printf("Kada su sile okrenute u istom smjeru rezultat iznosi: %d N\n", F1+F2);
    printf("Kada su sile okrenute u suprotnom smjeru rezultat iznosi: %d N\n", F1-F2);
    printf("Kada su sile pod kutom od 90 stupnjeva rezultat iznosi: %.0f N\n", sqrt (F2*F2 + F1*F1) );


    return 0;
}
