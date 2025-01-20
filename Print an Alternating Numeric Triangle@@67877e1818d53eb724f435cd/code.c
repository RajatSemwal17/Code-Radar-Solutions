#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<=rows;cols++){
            printf("%d ",rows==0?1:cols);
        }
        printf("\n");
    }
    return 0;
}