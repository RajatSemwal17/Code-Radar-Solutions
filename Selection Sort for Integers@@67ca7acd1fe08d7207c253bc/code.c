int selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int x = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[x]){
                x=j;
            }
        }
            int temp = arr[x];
            arr[x] = arr[i];
            arr[i] = temp;
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}