#include<stdio.h>

int countNumber(int arr[], int n, int num){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == num){
            count++;
        }
    }
    return count;
}
int main(){
    int n,num;
    scanf("%d %d",&n,&num);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",countNumber(arr,n,num));
    return 0;
}