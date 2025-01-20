#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int rows=0;n<rows<n;rows++){
        // for(int i=0;i<n-rows-1;i++){
        //     printf(" ");
        // }
        for(int cols=0;cols<=rows;cols++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}