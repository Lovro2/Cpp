#include<stdio.h>
#include<stdlib.h>

int main()

{
    int a;
    int b;

    printf("unesi broj a i b\n");
    scanf("%d %d", &a, &b);

    if(a>b)
   {
    printf("%d je veci od %d\n",a,b);
   }
    else
    {
    printf("%d je manji od %d\n",a,b);
    }
    return 0;
}

