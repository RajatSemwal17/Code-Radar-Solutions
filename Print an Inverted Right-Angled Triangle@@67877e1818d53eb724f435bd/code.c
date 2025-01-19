#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int rows=1;rows<=n;rows++){
        for(int cols=1;cols<=rows;cols++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}