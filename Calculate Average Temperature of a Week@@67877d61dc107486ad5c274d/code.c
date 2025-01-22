#include <stdio.h>

struct week{
    float temp;
};

int main() {
    struct week e[7];
    float totalTemp=0;
    for(int i=0;i<7;i++){
        scanf("%f",&e[i].temp);
        totalTemp += e[i].temp;
    }
    printf("%.2f",totalTemp);
    return 0;
}