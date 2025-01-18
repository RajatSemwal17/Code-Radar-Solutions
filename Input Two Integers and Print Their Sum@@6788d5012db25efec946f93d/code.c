#include <stdio.h>

char* welcome(int a,int b) {
    return a+b;
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Sum: %s", welcome(a,b));
    return 0;
}