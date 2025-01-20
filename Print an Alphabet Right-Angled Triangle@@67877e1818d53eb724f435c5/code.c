#include <stdio.h>

int main() {
    char n;
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<=rows;cols++){
            printf("%C ",cols+1);
        }
        printf("\n");
    }
    return 0;
}