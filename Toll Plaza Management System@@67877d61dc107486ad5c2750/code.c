#include <stdio.h>
#include<string.h>

struct info{
    char num[30];
    char name[30];
    float price;
};

int main() {
    int n;
    float carToll = 0.0 ,trucksToll = 0.0 , bikeTolls = 0.0;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",e[i].num,e[i].name,&e[i].price);

        if(strcmp(e[i].name,"Car")==0){
            carToll += e[i].price;
        }
        else if(strcmp(e[i].name,"Truck")==0){
            trucksToll += e[i].price;
        }
        else if(strcmp(e[i].name,"Bike")==0){
            bikeTolls += e[i].price;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",carToll,trucksToll,bikeTolls);
    return 0;
}