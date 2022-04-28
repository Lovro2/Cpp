#include<stdlib.h>
#include<stdio.h>

int main()

{
    int n,k,A1,A2,A3,A4,A5,B,brBod=0;
    printf("Unesi broj zadataka i koliko Josip zna\n");
    scanf("%d", &n);
    printf("unesi broj zadataka\n");
    scanf("%d", &k);
    printf("unesi koliko zadataka Josip zna\n");
    scanf("%d %d %d %d %d", &A1, &A2, &A3, &A4, &A5);

    while(k){
            k--;
    scanf("%d",B);

    if(B==A1||B==A2||B==A3||B==A4||B==A5) brBod++;
    }
    brBod=brBod==0?1:brBod;

    printf("Dobio je %d",brBod);




}
