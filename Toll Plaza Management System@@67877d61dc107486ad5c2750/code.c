#include <stdio.h>

struct info{
    int num;
    char name[30];
    float price;
};

int main() {
    int n;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].num,e[i].name,&e[i].price);
    }
    for(int i=0;i<n;i++){
        printf("%s: %.2f",e[i].name,e[i].price);
    }
    return 0;
}