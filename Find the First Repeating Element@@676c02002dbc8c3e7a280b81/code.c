#include<stdio.h>

int firstRepeatingEl(int arr[], int n){
    int first = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == arr[i+1]){
            first = arr[i];
            break;
        }
    }
    return first;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",firstRepeatingEl(arr,n));
}