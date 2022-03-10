#include <stdlib.h>
#include <stdio.h>


int main()
{
    int a;

    printf ("Unesite broj kvadranta\n");
    scanf ("%d", &a);

    switch(a)
    {
    case 1:
        printf("x:+y:+");
        break;
    case 2:
        printf("x:-,y:+");
        break;
    case 3:
        printf("x:-,y:-");
        break;
    case 4:
        printf("x:+,y:-");
        break;
    deafult:
        printf("Nepostojeci kvadrant!");

    }
   return 0;
}

