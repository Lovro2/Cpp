#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    printf("Unesi cijenu prve tvrtke");
    scanf("%d", &x);

    int y;
    printf("unesi cijenu druge tvrtke");
    scanf("%d", &y);

   if(x<y){
    printf("Marko ce odabrati prvu tvrtku");
   }
   else{
    printf("Marko ce odabrati drugu tvrtku");
   }

}

