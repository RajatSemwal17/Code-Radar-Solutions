#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
        for(int i=0;i<n-rows;i++){
            printf(" ");
        }
        for(int cols=1;cols<=2*rows+1;cols++){
            printf("%d",cols);
        }
        printf("\n");
    }
    return 0;
}