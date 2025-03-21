#include<stdio.h>

// int firstRepeatingEl(int arr[], int n){
//     int visited[10000] = {0};
//     for(int i=0;i<n;i++){
//         if(visited[arr[i]] == 1){
//             return arr[i];
//         }
//         visited[arr[i]] = 1;
//     }
//     return -1;
// }

int firstRepeatingEl(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                return arr[i];
                break;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result = firstRepeatingEl(arr,n);
    if(result==-1){
        printf("-1");
    }
    else{
        printf("%d",result);
    }
}



