#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int missing = -1;
    int hash[n] = {0};

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[i] == 0) missing = i;
    }

    printf("%d",missing);
}