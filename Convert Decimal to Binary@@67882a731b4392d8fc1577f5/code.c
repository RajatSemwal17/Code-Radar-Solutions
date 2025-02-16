#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int binary[32];
    if(n==0){
        printf("0");
    }
    int i=0;
    while(n>0){
        binary[i] = n%2;
        n/=2;
        i++;
    }
    for (int j = i-1; j >=0; j--)
    {
        printf("%d",binary[j]);
    }
    
}










// #include <stdio.h>

// void convertDecToBinary(int n);
// void convertDecToBinary(int n){
//     int arr[32];
//     int i=0;
//     if(n==0){
//         printf("0");
//         return;
//     }

//     while(n>0){
//         arr[i] = n%2;
//         n/=2;
//         i++;
//     }
//     for(int j=i-1;j>=0;j--){
//         printf("%d",arr[j]);
//     }

// }

// int main() {
//     int n;
//     scanf("%d",&n);
//     convertDecToBinary(n);
//     return 0;
// }