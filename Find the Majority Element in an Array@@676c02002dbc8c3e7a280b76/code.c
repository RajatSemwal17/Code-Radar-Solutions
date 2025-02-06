#include <stdio.h>

int majorityElements(int arr[], int n){
    int count=0 , a = -1;
    for(int i=0;i<n;i++){
        if(count==0) a = arr[i];
        count+=arr[i] == a ? 1 : -1;
    }
    count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==a)count++;
    }
        return count > n/2 ? a : -1;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",majorityElements(arr,n));
    return 0;
}