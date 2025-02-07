#include <stdio.h>

void convertDecToBinary(int n);
void convertDecToBinary(int n){
    int arr[32];
    int i=0;
    if(n==0){
        printf("0");
        return;
    }
    while(n>0){
        arr[i] = n%2;
        n/=2;
        i++;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}

int main() {
    int n;
    scanf("%d",&n);
    convertDecToBinary(n);
    return 0;
}