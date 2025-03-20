#include<stdio.h>
#include<limits.h>
void pairWithMinDifference(int arr[], int n){
    int minDiff = INT_MAX;
    int index1 = -1, index2 = -1;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff = abs(arr[j]-arr[i]);
            if(diff < minDiff){
                minDiff = diff;
                index1 = i;
                index2 = j;
            }
        }
    }
    printf("%d %d",index1,index2);
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