#include <stdio.h>

int main() {
    int n,num;
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<=rows;cols++){
            printf("%d ",cols+1);
            num-=1;
        }
        printf("\n");
    }
    return 0;
}