#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct klokan{
    char ime[20];
    char boja[20];
    int brojDjece;
    };
int main()
{
int i;
 FILE*filePointer;
filePointer=fopen("klokan.txt","r");

 struct klokan k;
 for(i=0;i>-1;i++){

    fscanf(filePointer,"%s", k.ime);

    if(!strcmp("dosta",k.ime)) break;
    fscanf(filePointer,"%s", k.boja);

    fscanf(filePointer,"%d", &k.brojDjece);
    if(k.brojDjece>3)
    printf("%s\t%s\t%d\n",k.ime,k.boja,k.brojDjece);
 }
}
