#include <stdio.h>


int main() {
    int a;
    int isPrime=1;
    scanf("%d",&a);
    if(a<1){
        isPrime=0;
    }
    for(int i=2;i<a;i++){
        if(a%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}