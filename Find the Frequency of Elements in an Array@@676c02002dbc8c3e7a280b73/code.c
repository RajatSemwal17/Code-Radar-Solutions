#include <stdio.h>

void FrequencyOfElements(int arr[],int n){
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        // if(a[i]==1){
        //     continue;
        // }
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                a[j]=1;
            }
        }
        printf("%d %d\n",arr[i],count);
    }

}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    FrequencyOfElements(arr,n);

    return 0;
}

















