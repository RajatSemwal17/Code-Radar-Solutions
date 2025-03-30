#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void pairWithMinDifference(int arr[],int n){
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

    if(a<b){printf("%d %d\n",a,b);}
    else if(b<a){printf("%d %d\n",b,a);}
    else {printf("%d %d\n",b,a);
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