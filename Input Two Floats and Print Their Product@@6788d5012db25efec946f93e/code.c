#include <stdio.h>

float welcome(float a,float b) {
    return a*b;
}

int main() {
    float a,b;
    scanf("%f %f",&a,&b);
    printf("Product: %.2f", welcome(a,b));
    return 0;
}