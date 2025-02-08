#include <stdio.h>

int isprime(int n){
    int count=0
    if(n<=1){
        return 0;
        count=0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
            count=0;
        }
    }
    return 1;
    count++;
}

int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    if(isprime){
        count++;
    }
    printf("%d",count);
    return 0;
}








