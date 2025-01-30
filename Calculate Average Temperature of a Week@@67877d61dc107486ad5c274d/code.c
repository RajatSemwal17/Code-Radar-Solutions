#include<stdio.h>

typedef struct week{
    int temp;
}info;

int main(){
    info e[7];
    int sum=0;
    for(int i=0;i<7;i++){
        scanf("%d",&e[i].temp);
        sum += e[i].temp;
    }
}