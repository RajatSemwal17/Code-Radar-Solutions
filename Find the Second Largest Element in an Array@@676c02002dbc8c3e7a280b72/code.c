#include <stdio.h>
#include<limits.h>

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
            if( (!found) || (arr[i]>seclar) ){
                seclar=arr[i];
                found=1;
            }
        }
    }
    if(found){
        printf("%d",seclar);
    }
    else{
        printf("-1");
    }
}
#include <stdio.h>

void secondLargest2(int arr[],int n){
    int seclar = INT_MIN;
    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            seclar = largest;
            largest = arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>seclar && arr[i]!=largest){
            seclar = arr[i];
        }
    }
    if(seclar == INT_MIN){
        printf("-1");
    }
    else{
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
    // int largest;
    // secondLargest(arr,n,largest);
    secondLargest2(arr,n);
    return 0;
}








