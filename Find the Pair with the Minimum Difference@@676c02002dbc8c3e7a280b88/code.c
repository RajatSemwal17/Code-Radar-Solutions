#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void pairWithMinDifference(int arr[],int n){
    int mini = INT_MAX;
    int a,b;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( abs(arr[i]-arr[j]) < mini){
                mini = abs(arr[i]-arr[j]);
                a = arr[i];
                b = arr[j];
                
            }
        }
    }
            printf("%d %d\n",a,b);
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