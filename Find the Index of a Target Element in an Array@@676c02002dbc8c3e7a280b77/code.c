#include <stdio.h>

void index(int arr[],int n,int target){
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("%d",target);
            found=1;
        }
    }
    if(!found){
        printf("-1");
    }
}

int main() {
    int n;
    int target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&target);
    index(arr,n,target);

    return 0;
}