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
    int seclar = arr[0];
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            seclar = largest;
            largest = arr[i];
        }
    }

    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]>seclar && seclar!=largest){
            seclar = arr[i];
            found = 1;
        }
    }
    if(found){
        printf("%d",seclar);
    }
    else{
        printf("-1");
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








