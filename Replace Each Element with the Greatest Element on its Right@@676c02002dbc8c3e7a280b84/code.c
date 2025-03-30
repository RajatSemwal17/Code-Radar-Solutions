#include<stdio.h>

int replaceWithGreatest(int arr[], int n){
    int maxi = -1;
    for(int i = n-1 ; i>=0;i--){
        int temp = arr[i];
        arr[i] = x;
        
        if(temp > x){
            x = temp;
        }
    }
}
int main() {
    int n;
    scanf("%d",&arr[i]);
    int arr[n];
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    replaceWithGreatest(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
} 