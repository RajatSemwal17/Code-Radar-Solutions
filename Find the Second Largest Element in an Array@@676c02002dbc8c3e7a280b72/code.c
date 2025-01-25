#include <stdio.h>

void secondLargest(int arr[],int n,int *secLar){
    *secLar = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > *secLar){
            *secLar = arr[i]+1;
        }
    }

}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int secLar;
    secondLargest(arr,n,&secLar);
    printf("%d",secLar);
    return 0;
}