int fibonacciSeries(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 1;
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}