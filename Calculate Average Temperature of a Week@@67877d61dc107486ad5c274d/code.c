#include <stdio.h>

struct week{
    int temp;
};

int main() {
    struct week e[7];
    float totalTemp;
    for(int i=0;i<7;i++){
        scanf("%d",%e[i].temp);
        totalTemp += e[i].temp;
    }
    printf("%d",totalTemp);
    return 0;
}