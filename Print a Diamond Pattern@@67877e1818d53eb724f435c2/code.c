#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int rows=0;rows<=2*n-1;rows++){
        int total = rows < n ? rows + 1 : 2 * n - rows - 1;
        int space = n-total;
        for(int i=0;i<space;i++){
            printf(" ");
        }
        for(int cols=0; cols<2*total-1; cols++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}