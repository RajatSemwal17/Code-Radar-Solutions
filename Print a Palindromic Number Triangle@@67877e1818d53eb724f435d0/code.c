#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int rows=1;rows<=n;rows++){
        for(int i=0;i<n-rows;i++){
            printf(" ");
        }
        for(int cols=1;cols<=rows;cols++){
            printf("%d",cols);
        }
        // for(int cols=rows-1;cols>=1;cols--){
        //     printf("%d",cols);
        // }
        for(int cols=2;cols<=rows;cols++){
            printf("%d",cols);
        }
        printf("\n");
    }
    return 0;
}