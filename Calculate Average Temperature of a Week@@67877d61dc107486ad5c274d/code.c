#include<stdio.h>

typedef struct week{
    int temp;
    char day[20];
}info;

int main(){
    info e[7];
    int sum=0;
    for(int i=0;i<7;i++){
        scanf("%s %d",e[i].day,&e[i].temp);
        sum += e[i].temp;
    }
    printf("%d",sum);
}