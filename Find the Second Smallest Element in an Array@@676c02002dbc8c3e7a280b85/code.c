#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

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
    if(!secSml){
    printf("-1");
    }    
    else{
    printf("%d",secSml);

    }
}