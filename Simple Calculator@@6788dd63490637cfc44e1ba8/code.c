#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);

    if(c=='+') printf("%d",a+b);
    if(c=='-') printf("%d",a-b);
    if(c=='/') printf("%d",a/b);
    if(c=='*') printf("%d",a*b);
    return 0;
}    