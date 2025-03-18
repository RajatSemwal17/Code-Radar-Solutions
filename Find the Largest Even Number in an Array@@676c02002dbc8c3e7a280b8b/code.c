#include<limits.h>
#include<stdio.h>

int function(int n , int arr[]){
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i] > largest){
                largest = arr[i];
            }
        }
    }
    return largest;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(function(n,arr)){
        printf("%d",function(n,arr));
    }
    else{
        printf("-1");
    }
}