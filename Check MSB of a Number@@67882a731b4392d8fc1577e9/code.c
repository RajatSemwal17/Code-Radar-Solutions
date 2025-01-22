#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a & 0x80){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}