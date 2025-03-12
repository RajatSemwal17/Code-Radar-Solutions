#include<string.h>
void insertionSort(char arr[][100],int n){
    for(int i=0;i<n;i++){
        int j = i;
        while(j>0 && strcmp(arr[j-1],arr[j])>0){
            char temp[100];
            strcpy(temp,arr[j-1]);
            strcpy(arr[j-1],arr[j]);
            strcpy(tarr[j],temp);
            j--;
        }
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}