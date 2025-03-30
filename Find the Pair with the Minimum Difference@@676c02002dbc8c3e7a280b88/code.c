#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void pairWithMinDifference(int arr[],int n){
    int mini = INT_MAX;
    int a,b;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]-arr[j] < mini){
                a = i;
                b = j;
            }
            printf("%d %d\n",a,b);
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
    pairWithMinDifference(arr,n);
}