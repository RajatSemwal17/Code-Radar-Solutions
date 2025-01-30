#include<stdio.h>

typedef struct info {
    char X[20] , Y[20];
    float price;
}info;

int main(){
    int n;
    float threshold;
    scanf("%d",&n);
    info e[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",e[i].X,e[i].Y,&e[i].price);
    }
    scanf("%f",&threshold);
    for(int i=0;i<n;i++){
        printf("Books above price %.2f:\nTitle: %s, Author: %s, Price: %.2f\n",threshold,e[i].X,e[i].Y,e[i].price);
    }
    
}