void factorialRange(int start,int end){
    for(int i = start;i<=end;i++){
        int product = 1;
        for(int j = 1;j<i;j++){
            product*=j;
        }
        printf("%d ",product);
    }
}