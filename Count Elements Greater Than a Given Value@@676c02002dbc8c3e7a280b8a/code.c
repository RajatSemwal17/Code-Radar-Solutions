#include<stdio.h>
int elementsGreaterThanK(int arr[],int n,int k){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > k){
            count++;
        }
    }
    return count;
}

int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    printf("%d ",elementsGreaterThanK(arr,n,k));
    return 0;
}