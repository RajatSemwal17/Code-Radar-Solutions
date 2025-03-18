#include<stdio.h>
#define MAX 10001

int maxFrequency(int arr[],int n){
    int hash[MAX] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int maxFreq=0,maxEle = -1;
    
    for(int i=0;i<MAX;i++){
        if(hash[i] > 0){
            if(hash[i] > maxFreq)
            {maxFreq = hash[i];
            maxEle = i;}
        }
    }
    printf("%d",maxEle);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    maxFrequency(arr,n);
}













