#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
        for(int i=0;i<n-rows;i++){
            printf(" ");
        }
        for(int cols=0;cols<2*rows+1;cols++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}