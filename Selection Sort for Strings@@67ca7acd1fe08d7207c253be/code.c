void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int mini = i;

        for(int j=i;j<n;j++){
            if(strcmp(arr[j],arr[mini]) < 0){
                mini = j;
            }
        }
        char temp[100];
        strcpy(temp,arr[mini]);
        strcpy(arr[mini],arr[i]);
        strcpy(arr[i],temp);
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s",arr[i]);
    }
}