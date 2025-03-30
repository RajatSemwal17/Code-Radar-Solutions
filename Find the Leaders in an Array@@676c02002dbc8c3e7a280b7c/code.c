#include<stdio.h>
void leadersInArray(int arr[], int n) {
    int maxi = -1; 
    int leaders[n];
    int count = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > maxi) {
            maxi = arr[i]; 
            leaders[count++] = arr[i];
        }
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    leadersInArray(arr,n);
}