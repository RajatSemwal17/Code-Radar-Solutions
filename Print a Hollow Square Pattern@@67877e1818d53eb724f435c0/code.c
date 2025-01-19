#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<rows;cols++){
            if(cols==0 || rows==n-1 || rows==1 || cols==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }printf("\n");

    }
    return 0;
}