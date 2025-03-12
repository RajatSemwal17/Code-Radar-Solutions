void fibonacciSeries(int n){
    int a=0;
    int b=1;
    int t;
    for(int i=0;i<n;i++){
        printf("%d ",a);
        t=a+b;
        a=b;
        b=t; 
    }
}