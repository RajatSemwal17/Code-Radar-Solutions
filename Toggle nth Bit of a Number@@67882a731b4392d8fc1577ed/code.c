#include <stdio.h>

int toggleNthbit(int n, int m){
    return n ^ (1<<m);
}
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",toggleNthbit(n,m));
    return 0;
}