#include <stdio.h>

int lowestSetinBit(int n){
    return n & ~n;
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",lowestSetinBit(n));
    return 0;
}