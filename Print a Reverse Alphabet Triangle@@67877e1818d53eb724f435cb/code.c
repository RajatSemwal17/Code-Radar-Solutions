#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
        for(int cols=rows;cols<n;cols++){
            printf("%C ",cols + 'A');
        }
        printf("\n");
    }

    return 0;
}