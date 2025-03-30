#include<stdio.h>

int leadersInArray(int arr[],int n){
    int maxi = -1;
    for(int i=0i<n;i++){
        int temp = arr[i];
        arr[i] = maxi;
        if(temp > maxi){
            maxi = temp;
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
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}