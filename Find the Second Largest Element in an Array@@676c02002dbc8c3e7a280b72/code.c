#include <stdio.h>

void secondLargest(int arr[],int n,int *largest){
    *largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > *largest){
            *largest = arr[i];
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
    int largest;
    secondLargest(arr,n,&largest);
    printf("%d",largest);
    return 0;
}








