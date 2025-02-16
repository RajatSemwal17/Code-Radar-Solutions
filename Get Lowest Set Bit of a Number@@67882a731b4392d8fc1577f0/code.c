#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int count=0;
    while(n&i == 0){
        n=n>>1;
        count++;
    }
    printf("%d",count);
    return 0;
}