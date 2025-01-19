#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int c=a/2;
    if(a==c*2){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}