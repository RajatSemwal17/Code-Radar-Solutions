#include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int count;
//     int freq[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         freq[i] = -1;
//     }
//     for(int i=0;i<n;i++){
//         count=1;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//                 freq[j] = 0;
//             }
//     }
//             if(freq[i] != 0){
//                 freq[i] = count;
//             }
// }
//     for(int i=0;i<n;i++){
//         if (freq[i] != 0) printf("%d %d\n",arr[i],freq[i]);
//     }
//     return 0;
// }




#include<stdio.h>
// #define MAX 100000
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int hash[MAX] = {0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }

//     for (int i = 0; i < MAX; i++) {
//         if (hash[i] > 0) {
//             printf("%d %d\n", i, hash[i]);
//         }
//     }
// }






int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    int visited[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        visited[i] = 0;
    }

    for(int i=0;i<n;i++){
    }
    for(int i=0;i<n;i++){
        if(visited[i]) continue;

        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1;
                // break;
            }
        }
        printf("%d %d",arr[i],count);
    }
}










