#include<stdio.h>

int increasing(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }
    return 1;
}

int decreasing(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i] < arr[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a = increasing(arr,n);
    int b = decreasing(arr,n);
    if(a==1){
        printf("YES");
    }
    else if(b==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}