#include <stdio.h>

int index(int arr[],int n,int target){
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("%d",i);
            found=1;
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
    int target;
    scanf("%d",&target);
    index(arr,n,target)

    return 0;
}