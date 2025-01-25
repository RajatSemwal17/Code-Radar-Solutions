#include <stdio.h>

void MaxAndMin(int arr[],int n,int *max,int *min){
    *min = arr[0];
    *max = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]< *min){
            *min = arr[i];
        }
        if(arr[i]> *max){
            *max = arr[i];
        }
    }
}

int main() {
    int n;
    
    return 0;
}