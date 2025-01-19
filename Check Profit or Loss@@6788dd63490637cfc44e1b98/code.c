#include <stdio.h>

int main() {
    int profit , loss;
    scanf("%d %d",&loss,&profit);
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