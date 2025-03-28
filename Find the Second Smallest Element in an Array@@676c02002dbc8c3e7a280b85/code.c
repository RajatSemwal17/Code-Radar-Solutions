#include<stdio.h>
#include<limits.h>

int secSml(int arr[], int n){
    int secSml = INT_MAX , Sml = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i] < Sml){
            secSml = Sml;
            Sml = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] < secSml && arr[i] != Sml ){
            secSml = arr[i];
        }
    }
    return secSml;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int secSmll = secSml(arr,n);

    if(!secSmll) printf("-1");
    else printf("%d",secSmll);
}