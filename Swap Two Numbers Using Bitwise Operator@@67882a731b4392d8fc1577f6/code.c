#include <stdio.h>

int *swap(int a,int b){
    a = a^b;
    b = a^b;
    a = a^b;
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d",swap(a,b));
    return 0;
}