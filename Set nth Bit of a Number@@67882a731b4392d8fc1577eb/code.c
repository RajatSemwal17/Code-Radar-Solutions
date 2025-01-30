#include <stdio.h>

int SetNthBit(int n, int m){
    return n | (1<<m)
}

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",SetNthBit(n,m));
    return 0;
}