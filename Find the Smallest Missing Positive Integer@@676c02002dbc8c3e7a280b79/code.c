#include<stdio.h>
#define MAX 10001

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int hash[MAX] = {0};

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<MAX;i++){
        // if(arr[i] <=)
        hash[arr[i]] = 1;
    }
    for(int i=0;i<n+1;i++){
        if(hash[i] == 0) printf("%d",i);
        break;
    }

}