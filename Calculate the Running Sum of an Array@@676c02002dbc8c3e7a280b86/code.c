#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]+=arr[i-1];
    }
    
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }


}