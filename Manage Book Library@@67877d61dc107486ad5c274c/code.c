#include<stdio.h>

typedef struct info {
    char X[20] , Y[20];
    float price;
}info;

int main(){
    int n;
    scanf("%d",&n);
    info e[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",e[i].X,e[i].Y,&e[i].price);
    }
    for(int i=0;i<n;i++){
        printf("%s %s %f",e[i].X,e[i].Y,e[i].price);
    }
    
}