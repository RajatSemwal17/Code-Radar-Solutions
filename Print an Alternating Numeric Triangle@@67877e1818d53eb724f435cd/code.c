#include <stdio.h>

int main() {
    int n,num;
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<=rows;cols++){
            printf("%d ",num);
            num--;
        }
        printf("\n");
    }
    return 0;
}