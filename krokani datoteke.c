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
filePointer=fopen("klokan.txt","w");

fprintf(filePointer,"ime\tboja\tdjeca\n");
 struct klokan k;
 for(i=0;i>-1;i++){

    printf("Unesi ime klokana\n");
    scanf("%s", k.ime);
    if(!strcmp("dosta",k.ime)) break;
    printf("Unesi koliko klokan ima djece\n");
    scanf("%d", &k.brojDjece);
    printf("Unesi boju klokana\n");
    scanf("%s", k.boja);
    if(!strcmp("dosta",k.boja)) break;
    if(k.brojDjece>3)
    fprintf(filePointer,"%s\t%s\t%d\n",k.ime,k.boja,k.brojDjece);
 }
}
