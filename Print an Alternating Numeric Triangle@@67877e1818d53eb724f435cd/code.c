#include <stdio.h>

int main() {
    int n ,sum=0;
    scanf("%d",&n);
    int num;
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<=rows;cols++){
            sum = rows+cols;
            if(sum%2==0){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}