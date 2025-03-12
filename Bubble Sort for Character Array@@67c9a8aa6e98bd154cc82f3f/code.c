#include<stdio.h>

void bubbleSort(char arr[], int n){
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j <= i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    
}
int main(){
    int n;
    scanf("%d",&n);

    char arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c",&arr[i]);
    }
    
    bubbleSort(arr,n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%c ",arr[i]);
    }
    
}