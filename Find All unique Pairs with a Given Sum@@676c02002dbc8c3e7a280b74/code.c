#include <stdio.h>
#define MAX 100001

void pairOfSum(int arr[], int n, int sum) {
    bool printed[MAX] = {false}; 

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                if (!printed[arr[i]] || !printed[arr[j]]) {
                    printf("Pair: %d %d\n", arr[i], arr[j]);
                    printed[arr[i]] = true;
                    printed[arr[j]] = true;
                }
            }
        }
    }
}

int main() {
    int n,sum;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&sum);
    pairOfSum(arr,n,sum);
    return 0;
}






