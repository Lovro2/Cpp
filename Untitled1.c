#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int moze(int x){
        return(x+7)>170;
    }

int main()
{
    int x;
    scanf("%d",&x);
    printf(moze(x)?"moze":"ne moze");
}
