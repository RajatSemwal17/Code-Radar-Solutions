#include<stdio.h>
#include<limits.h>
#include<stdlib.h>


int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

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