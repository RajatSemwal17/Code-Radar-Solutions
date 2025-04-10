#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int missing = -1;
    int hash[n+1] = {0};

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        // if(arr[i] <=)
        hash[arr[i]] = 1;
    }
    for(int i=0;i<n;i++){
        if(hash[i] == 0) missing = i;
        break;
    }

    printf("%d",missing);
}