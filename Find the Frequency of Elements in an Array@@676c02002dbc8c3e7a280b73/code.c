#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count;
    int freq[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i] = -1;
    }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j] = 0;
            }
            if(freq[i] != 0){
                freq[i] = count;
            }
    }
    for(int i=0;i<n;i++){
        printf("%d %d",arr[i],freq[i]);
    }
}
    return 0;
}