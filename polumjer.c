#include <stdio.h>
#include <stdlib.h>

int main()
{
   int rf;
   int rt;

   printf("unesi polumjer fontane\n");
   printf("unesi polumjer travnjaka\n");
    scnaf("%d %d",&rf,&rt);
    float pf=rf*rf*3.14159;
    float pt=(rt*rt*3.14159)-pf;

    printf("povrsina je %.2f",pt);


    return 0;
}
