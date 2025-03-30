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
    int hash[MAX] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int maxi = -1;
    int maxiFreq = INT_MIN;
    for(int i=0;i<n;i++){
        if(hash[i]> maxiFreq){
            maxiFreq = hash[i];
            maxi = i;
        }
    }
    printf("%d",maxi);
}