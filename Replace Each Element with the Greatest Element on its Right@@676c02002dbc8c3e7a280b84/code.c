#include<stdio.h>

int replaceWithGreatest(int arr[], int n){
    int maxi = -100;
    for(int i = n-1 ; i>=0;i--){
        int temp = arr[i];
        arr[i] = maxi;
        
        if(temp > maxi){
            maxi = temp;
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
    replaceWithGreatest(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
} 