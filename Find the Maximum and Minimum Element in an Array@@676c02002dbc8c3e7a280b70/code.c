#include <stdio.h>
#include <limits.h>

void MaxAndMin(int arr[],int n){
    int min = INT_MIN;
    int max = INT_MIN;

    for(int i=1;i<n;i++){
        if(arr[i]< min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
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
    int max,min;
    MaxAndMin(arr,n);
    printf("%d ",min);
    printf("%d",max);
    return 0;
}