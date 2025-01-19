#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("Equilateral");
    }
    else if(a!=b && b!=c && c!=a){
        printf("Scalene");
    }
    else if(a==b!=c || b==c!=a || a==c!=b){
        printf("Isosceles");
    }
    return 0;
}  