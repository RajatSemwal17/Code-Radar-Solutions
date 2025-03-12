void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int mini = i;

        for(int j=i;j<n;j++){
            if(strcmp(arr[j],arr[mini]) < 0){
                mini = j;
            }
        }
        char temp[100];
        strcmp(temp,arr[mini]);
        strcmp(arr[mini],arr[i]);
        strcmp(arr[i],temp);
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s",arr[i]);
    }
}