#include <stdio.h>

struct week{
    int m,t,w,th,f,sa,s;
}

int main() {
    struct week e[7];
    for(int i=0;i<7;i++){
        printf("Monday ");
        scanf("%d",&e[i].m);
        printf("Tuesday ");
        scanf("%d",&e[i].t);
        printf("Wednesday ");
        scanf("%d",&e[i].w);
        printf("Thursday ");
        scanf("%d",&e[i].th);
        printf("Friday ");
        scanf("%d",&e[i].f);
        printf("Saturday ");
        scanf("%d",&e[i].sa);
        printf("Sunday ");
        scanf("%d",&e[i].s);
    }
    return 0;
}