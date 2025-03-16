#include<stdio.h>

void RightRotate(int arr[], int d,int n){
    d = d%n;
    int temp[n];
    for(int i=0;i<d;i++){
        temp[i] = arr[n-d+i];
    }
    for(int i=d;i<n;i++){
        temp[i] = arr[i-d];
    }
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
}
int main(){
    int n,d;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&d);

    RightRotate(arr,d,n);
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}