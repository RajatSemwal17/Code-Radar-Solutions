int isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(isPrime(num)){
            printf("%d ",isPrime(num));
        }
        else{
            printf("No prime numbers");
        }
    }
}