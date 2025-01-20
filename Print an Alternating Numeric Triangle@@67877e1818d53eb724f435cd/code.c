#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int num;
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<=rows;cols++){
            printf("%d ",num+3);
            num--;
        }
        printf("\n");
    }
    return 0;
}