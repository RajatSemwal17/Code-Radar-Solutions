#include <stdio.h>
#include <string.h>

struct info{
    char X[30] , Y[30];
    float Z;
}

int main() {
    int n;
    float standard=0.0 , premium=0.0 , vip=0.0;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n i++){
        scanf("%s %s %f",e[i].X,e[i].Y,&e[i].Z);

        if(strcmp(e[i].Y,"Standard") == 0){
            standard += e[i].X;
        }
        else if(strcmp(e[i].Y,"Premium") == 0){
            premium += e[i].X;
        }
        else if(strcmp(e[i].Y,"VIP") == 0){
            vip += e[i].X;
        }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",standard,premium,vip)
    return 0;
}