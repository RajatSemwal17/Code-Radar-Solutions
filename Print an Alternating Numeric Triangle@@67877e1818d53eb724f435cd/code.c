#include <stdio.h>

int main() {
    int n,num=1;
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<=rows;cols++){
            printf("%d ",num+1);
            num--;
        }
        printf("\n");
    }
    return 0;
}