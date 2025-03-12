int searchInRotatedArray(int arr[],int n,int target){
    for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(arr[j] == target){
            printf("%d",j);
        }
    }
}
}