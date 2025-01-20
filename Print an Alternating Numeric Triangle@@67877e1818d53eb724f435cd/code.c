#include <stdio.h>

int main() {
    int n,num=1;
    scanf("%d",&n);
    for(int rows=1;rows<=n;rows++){
        for(int cols=1;cols<=rows;cols++){
            printf("%d ",num);
            num--;
        }
        printf("\n");
    }
    return 0;
}