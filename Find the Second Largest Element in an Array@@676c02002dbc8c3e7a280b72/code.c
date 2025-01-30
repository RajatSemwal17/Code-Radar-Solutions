#include <stdio.h>

void secondLargest(int arr[],int n,int largest){
    int seclar = arr[0];

    largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]<largest){
            if(arr[i]>seclar){
                seclar=arr[i];
                found=1;
            }
        }
    }
    if(found){
        printf("%d",seclar);
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
    secondLargest(arr,n,largest);
    return 0;
}








