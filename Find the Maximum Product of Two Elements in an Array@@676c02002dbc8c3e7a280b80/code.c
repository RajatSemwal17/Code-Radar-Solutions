#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int largest,largest2nd;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=0;
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    largest2nd=0;
    for(int i=0;i<n;i++){
        if(arr[i] > largest2nd && arr[i] < largest){
            largest2nd = arr[i];
        }
    }
    printf("%d %d",largest2nd,largest);

    return 0;
}