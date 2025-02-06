#include <stdio.h>

void rotateArray(int arr[],int n,index rotate){
    for(int i=rotate;i<n;i++){
        printf("%d\n",arr[i]);
    }
    for(int i==;i<rotate;i++){
        printf("%d\n",arr[i]);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int rotate;
    scanf("%d",&rotate);

    rotateArray(arr,n,rotate);

    return 0;
}