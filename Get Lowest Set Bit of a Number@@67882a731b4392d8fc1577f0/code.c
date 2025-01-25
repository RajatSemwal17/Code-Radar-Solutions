#include <stdio.h>

int lowestSetinBit(int n){
    if(n==0){
        return -1;
    }
    return n & -n;
}

int main() {
    int n;
    scanf("%d",&n);
    int position = lowestSetinBit(n);
    if(position==0){
        printf("0");
    }
    else{
        printf("%d",position);
    }
    return 0;
}