#include<stdio.h>
#include<limits.h>
#define MAX 10001

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int hash[MAX];
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int maxi = INT_MIN;
    int maxiFreq = INT_MIN;
    for(int i=0;i<n;i++){
        if(hash[i]> maxiFreq){
            maxiFreq = hash[i];
            maxi = arr[i];
        }
    }
    printf("%d %d",maxi , maxiFreq);
}