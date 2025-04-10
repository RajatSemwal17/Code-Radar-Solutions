#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
   int count= 0; 
    int missing = -1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j] == i)count++;
        }
    if(count == 0) missing = i;
    }
    printf("%d",missing);
}