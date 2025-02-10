#include <stdio.h>

int pairOfSum(int arr[],int n,int sum);
int pairOfSum(int arr[],int n,int sum){
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == sum){
                printf("%d %d\n",arr[i],arr[j]);
                found=1;
                return ;
            }
        }
    }
}

int main() {
    int n,sum;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&sum);
    pairOfSum(arr,n,sum);
    return 0;
}






