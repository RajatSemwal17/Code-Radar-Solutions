#include <stdio.h>

int main() {
    int profit , loss;
    scanf("%d %d",&profit,&loss);
    if(profit>loss){
        printf("Profit");
    }
    else if(loss>profit){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}