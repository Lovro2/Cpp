#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;

    printf("Unesi a, b, c, d\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int x=b==d?a+c:c*b+a*d;
    int y=b==d?d:b*d;
    printf("rezultat zbrajanja je: %d / %d\n",x,y);

    printf("rezultat zbrajanja je: %.2f\n",(float)x/y);



    return 0;
}
