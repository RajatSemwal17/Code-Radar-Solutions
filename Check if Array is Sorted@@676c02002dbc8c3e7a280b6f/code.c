#include <stdio.h>

int sortArr(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result = sortArr(arr,n);
    if(result){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}