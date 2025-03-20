#include<stdio.h>
int Palindrome(int arr[], int n){
    int original = n;
    int reverse=0;
    for(int i=0;i<n;i++){
        int digit = n%10;
        reverse = reverse*10 + digit;
        n/=10;
    }
    return reverse==original;
}

int countNoOfPalindromicNumbers(int n, int arr[]){
    int count=0;
    for(int i=0;i<n;i++){
        if(Palindrome(arr,n)){
            count++;
        }
    }
    return count;
}
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",countNoOfPalindromicNumbers(n,arr));
}