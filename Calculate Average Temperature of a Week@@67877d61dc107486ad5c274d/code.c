#include <stdio.h>

struct week{
    int days;
};

int main() {
    struct week e[7];
    float average;
    for(int i=0;i<7;i++){
        scanf("%d",e[i].days);

        average = (e[i].m+e[i].t)/7.0;
    }
    printf("Average Temperature: %.2f",average);
    return 0;
}