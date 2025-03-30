#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int sort(int arr[],int n){
    int x;
    for(int i=0;i<n;i++){
        x = i+1;
        for(int j=i;j<n;j++){
            x = j;
        }
        int temp = arr[x];
        arr[x] = arr[i];
        arr[i] = temp;
    }
}


void pairWithMinDifference(int arr[],int n){
    sort(arr,n);
    int mini = INT_MAX;
    int a,b;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
    int diff = abs(arr[i]-arr[j]);
            if(diff < mini){
                mini = diff;
                a = arr[i];
                b = arr[j];
                
            }
        }
    }

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    printf("%d %d",a,b);
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