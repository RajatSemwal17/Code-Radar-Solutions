int selectionSort(char arr[], int n){
    for(int i=0;i<n-1;i++){
        int x = i;
        for(int j=0;j<n;j++){
            if(arr[j] < arr[x]){
                x = i;
            }
        }
        int temp = arr[x];
        arr[x] = arr[i];
        arr[i] = temp;
    }
}
void printArray(char arr[], int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]+'a');
    }
}