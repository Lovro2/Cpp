#include<stdio.h>
#include<stdlib.h>

 int main()

 {
     float x;

     printf("Unesi duljinu stranice\n");
     scanf("%f", &x);

     if(x>0)
     {
         float P=(x*x)*sqrt(3)/4;
         printf("Povrsina trokuta je %f",P);
     }
     else
     {
         printf("duljina stranice mora biti pozitivna");
     }

     return 0;
 }

