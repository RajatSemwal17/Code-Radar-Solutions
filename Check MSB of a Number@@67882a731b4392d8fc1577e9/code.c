#include <stdio.h>

int main() {
    int n,msb=1;
    scanf("%d",&n);
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