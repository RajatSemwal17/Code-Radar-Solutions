#include <stdio.h>

void rotateArray(int arr[],int n,int rotate){
    for(int i=rotate;i<n;i++){
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<rotate;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int rotate;
    scanf("%d",&rotate);

    rotateArray(arr,n,rotate);

    return 0;
}