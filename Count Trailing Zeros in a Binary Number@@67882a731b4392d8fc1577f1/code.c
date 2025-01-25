#include <stdio.h>

int trailZeroes(int n){
    int count=0;
    while(n&1==0 && n!=0){
        count++;
    }
    return count;
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",trailZeroes(n));
    return 0;
}