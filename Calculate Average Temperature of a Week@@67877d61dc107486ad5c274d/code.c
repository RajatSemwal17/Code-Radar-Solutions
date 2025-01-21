#include <stdio.h>

struct week{
    int m,t,w,th,f,sa,s;
};

int main() {
    struct week e[7];
    float average;
    for(int i=0;i<7;i++){
        // printf("Monday ");
        scanf("%d",&e[i].m);
        // printf("Tuesday ");
        scanf("%d",&e[i].t);
        // printf("Wednesday ");
        scanf("%d",&e[i].w);
        // printf("Thursday ");
        scanf("%d",&e[i].th);
        // printf("Friday ");
        scanf("%d",&e[i].f);
        // printf("Saturday ");
        scanf("%d",&e[i].sa);
        // printf("Sunday ");
        scanf("%d",&e[i].s);

        average = (e[i].m+e[i].t)/7.0;
    }
    printf("Average Temperature: %.2f",average);
    return 0;
}