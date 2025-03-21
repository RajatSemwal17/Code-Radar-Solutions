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
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int hash[100] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for (int i = 0; i < 100; i++) {
        if (hash[i] > 0) {
            printf("%d appears %d times\n", i, hash[i]);
        }
    }
}
















