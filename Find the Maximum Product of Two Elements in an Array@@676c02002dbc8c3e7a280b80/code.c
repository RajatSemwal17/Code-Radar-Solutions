#include<stdio.h>

int selectionSort(int n,int arr[]){
    for(int i=0;i<n;i++){
        int x = i;
        for(int j=0;j<n;j++){
            if(arr[j] > arr[x]){
                x=j;
            }
        }
        int temp = arr[x];
        arr[x] = arr[i];
        arr[i] = temp;
    }
    return arr[n-1]*arr[n-2];
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",selectionSort(n,arr));
}






