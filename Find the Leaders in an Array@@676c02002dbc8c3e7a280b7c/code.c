#include<stdio.h>

void leadersInArray(int arr[],int n){
    int maxi = -1;
    for(int i=n-1;i>=0;i--){
        if(arr[i] > maxi){
            printf("%d ",arr[i])
            maxi = arr[i];
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    leadersInArray(arr,n);
    
}