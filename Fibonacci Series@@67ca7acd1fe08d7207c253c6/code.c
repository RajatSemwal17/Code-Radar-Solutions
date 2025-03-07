void fibonacciSeries(int n){
    if(n==0)  printf("0");
    if(n==1) printf("1");
    if(n==2) printf("1");
    printf("%d",fibonacciSeries(n-1) + fibonacciSeries(n-2));
}