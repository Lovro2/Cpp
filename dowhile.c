#include<stdio.h>
#include<stdlib.h>

 int main()

 {
    int n, i, Fac=1, br=0;

    do{
    printf("Unesi broj\n");
    scanf("%d", &n);
    if(n<0){printf("Error\n");
    if(br>5) printf("Unesi pozitivan broj\n", br);
    }
    br++;

    }while (n<0);

    i=n;

    while(i)
        Fac*=i--;
    printf("faktorijal broja %d je %d",n, Fac);

    return 0;

 }



