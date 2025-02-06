#include <stdio.h>

int majorityElements(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",i);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    majorityElements(arr,n);
    return 0;
}