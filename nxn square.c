#include<stdio.h>
#include<stdlib.h>

void main()

{
    int n;

    printf("Unesi broj\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
     printf(".");

    printf("\n");
}

}

