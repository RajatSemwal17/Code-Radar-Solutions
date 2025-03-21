#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
void pairWithMinDifference(int arr[], int n){
    int minDiff = INT_MAX;
    int index1 = -1, index2 = -1;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff = abs(arr[j]-arr[i]);
            if((diff < minDiff || (diff == minDiff && (arr[i] < index1 || (arr[i] == index1 && arr[j] < index2))))){
                minDiff = diff;
                index1 = i;
                index2 = j;
            }
        }
    }
     printf("%d %d",arr[index1],arr[index2]);
    
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