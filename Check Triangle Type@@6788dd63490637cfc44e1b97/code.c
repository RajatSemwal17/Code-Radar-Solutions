#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c){
        printf("Equilateral");
    }
    else if(a==b!=c || b==c!=a || a==c!=b){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}  