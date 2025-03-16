#include<stdio.h>

int MedianOfArray(int arr[],int n){
    int median;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        median = sum/n;
    }
    return median;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",MedianOfArray(arr,n));
}