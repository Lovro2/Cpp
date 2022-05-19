#include <stdio.h>

int main(){

    int i;
    int a[5];
    int temp;
    int b=1;

    for(i=0;i<5;i++){
        printf("Unesi broj:");
        scanf("%d", &a[i]);
}
    while(b){
        b=0;
    for(i=0;i<4;i++){
    if(a[i]>a[i+1]){
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
    b=1;
    }
}
}
for(i=0;i<5;i++){
        printf("%d", a[i]);
}
    return 0;
}




