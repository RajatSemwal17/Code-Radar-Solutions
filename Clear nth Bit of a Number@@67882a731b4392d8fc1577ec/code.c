#include <stdio.h>

int nthBitprint(int n, int m){
    return (n<<m) | 1;
}
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int a = nthBitprint(n,m);
    printf("%d",a);
    return 0;
}