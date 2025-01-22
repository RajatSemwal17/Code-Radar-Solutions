#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a & 0X80){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}