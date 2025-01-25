#include <stdio.h>

int lowestSetinBit(int n){
    return n-1;
}

int main() {
    scanf("%d",&n);
    printf("%d",lowestSetinBit(n));
    return 0;
}