#include <stdio.h>

struct week{
    float temp;
};

int main() {
    int n=7;
    struct week e[7];
    float totalTemp=0;
    for(int i=0;i<n;i++){
        scanf("%f",&e[i].temp);
        totalTemp += e[i].temp;
    }
    printf("%.2f",totalTemp);
    return 0;
}