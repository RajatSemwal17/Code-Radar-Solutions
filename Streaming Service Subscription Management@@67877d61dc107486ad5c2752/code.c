#include <stdio.h>
#include<string.h>

typedef struct Subscription{
    char name[20];
    char type[20];
    float cost;
}Subscription;
int main() {
    int n;
    scanf("%d",&n);
    Subscription e[n];

    int basicCount=0 , standardCount=0 , premiumCount=0;
    float basicRevenue=0 , standardRevenue=0 , premiumRevenue=0;

    for(int i=0;i<n;i++){
        scanf("%s %s %f",e[i].name,e[i].type,&e[i].cost);

        if(strcmp(e[i].type,"Basic") == 0){
            basicCount++;
            basicRevenue += e[i].cost;
        }
        else if(strcmp(e[i].type,"Standard") == 0){
            standardCount++;
            standardRevenue += e[i].cost;
        }
        else if(strcmp(e[i].type,"Premium") == 0){
            premiumCount++;
            premiumRevenue += e[i].cost;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; ",basicCount,basicRevenue);
    printf("Standard: %d Users, Revenue: %.2f; ",standardCount,standardRevenue);
    printf("Premium: %d Users, Revenue: %.2f",premiumCount,premiumRevenue);
    return 0;
}





