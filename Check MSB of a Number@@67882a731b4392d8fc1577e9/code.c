#include <stdio.h>

int main() {
    long long int n,msb=1;
    scanf("%lld",&n);
    if(n==0){
        printf("Not Set");
    }
    while(n>1){
        n=n>>1;
        msb=msb<<1;
    }
    if(msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}