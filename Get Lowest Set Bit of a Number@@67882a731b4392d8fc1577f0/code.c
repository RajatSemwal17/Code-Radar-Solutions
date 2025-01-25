#include <stdio.h>

int lowestSetinBit(int n){
    if(n==0){
        return -1;
    }
    else
    return n & -n;
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",lowestSetinBit(n));
    return 0;
}