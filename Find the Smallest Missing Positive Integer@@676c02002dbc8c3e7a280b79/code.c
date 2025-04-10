#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[];
    int missing = -1;
    int hash[20] = {0};

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