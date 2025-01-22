#include <stdio.h>

struct week{
    int days;
    int temp;
};

int main() {
    struct week e[7];
    float totalTemp=0;
    float average;
    for(int i=0;i<7;i++){
        scanf("%f",&e[i].tempp);

        totalTemp += e[i].temp;
    }
    average = temp/7;
    printf("Average Temperature: %.2f",average);
    return 0;
}