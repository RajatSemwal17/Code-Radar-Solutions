#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int number=1;
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<=rows;cols++){
            printf("%d ",number);
            number--;
        }
        printf("\n");
    }
    return 0;
}