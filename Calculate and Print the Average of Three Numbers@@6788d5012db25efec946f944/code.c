#include <stdio.h>

int main() {
    float a,b,c;
    
    scanf("%f %f %f",&a,&b,&c);
    float sum = (a+b+c)/3.0;
    printf("Average: %.2f",sum);
    return 0;
}