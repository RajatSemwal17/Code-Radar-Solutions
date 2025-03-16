#include<stdio.h>

void RightRotate(int arr[], int d){
    d = d%n;
    int temp[n];
    for(int i=0;i<d;i++){
        temp[i] = arr[n-i+1];
    }
    for(int i=d;i<n;i++){
        temp[i] = arr[i-d];
    }
    for(int i=0;i<n;i++){
        temp[i] = arr[i];
    }
}
int main(){
    int n;
    RightRotate(arr,d);
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&d);
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}