#include <stdio.h>

int getNthbit(int num,int n){
    return (num>>n) & 1
}

int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    int nthBit = getNthbit(num,n);
    printf("%d",nthBit);
    return 0;
}