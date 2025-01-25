#include <stdio.h>

int countLeadingZeroes(int n){
    int count = 0;
    for(int i==31;i>=0;i--){
        if(n>>i & 1){
            break;
        }
        count++;
    }
    return count;
}

int main() {
    int n;
    scanf("%d",&n);
    // printf("%d",countLeadingZeroes(n));
    return 0;
}