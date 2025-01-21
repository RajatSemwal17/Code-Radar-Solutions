#include <stdio.h>

struct week{
    int days;
    int tempp;
};

int main() {
    struct week e[7];
    float temp=0;
    float average;
    for(int i=0;i<7;i++){
        scanf("%d",e[i].tempp);

        temp += e[i].tempp;
    }
    average = temp/7;
    printf("Average Temperature: %.2f",average);
    return 0;
}