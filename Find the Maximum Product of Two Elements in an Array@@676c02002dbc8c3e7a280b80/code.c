#include<stdio.h>

int selectionSort(int n,int arr[]){
    for(int i=0;i<n;i++){
        int x = i;
        for(int j=i;j<n;j++){
            if(arr[j] > arr[x]){
                x=j;
            }
        }
        int temp = arr[x];
        arr[x] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selectionSort(n,arr);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}