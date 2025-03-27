void factorialRange(int start,int end){
    if(start > end){
        printf("Invalid range");
        break;
    }
    else if(start < 0 || end<0){
        printf("Invalid range");
        break;
    }
    for(int i = start;i<=end;i++){
        int product = 1;
        for(int j = 1;j<=i;j++){
            product*=j;
        }
        printf("%d\n",product);
    }
}