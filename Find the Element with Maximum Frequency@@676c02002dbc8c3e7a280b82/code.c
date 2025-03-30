#include<stdio.h>
#define MAX 10001

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int hash[MAX];
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(hash[i]>0)
        printf("%d %d",arr[i],hash[i]);
    }
}