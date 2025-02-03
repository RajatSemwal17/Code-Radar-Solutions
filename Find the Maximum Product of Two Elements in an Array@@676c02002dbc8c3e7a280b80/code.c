#include <stdio.h>

int main() {
    int n;
    int largest=0,largest2nd=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] > largest2nd && arr[i] < largest){
            largest2nd = arr[i];
        }
    }
    printf("%d",largest2nd);

    return 0;
}