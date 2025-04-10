#include <stdio.h>
#define MAX 10001

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int hash[MAX] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0 && arr[i] < MAX) {
            hash[arr[i]] = 1;
        }
    }

    for (int i = 1; i < MAX; i++) {
        if (hash[i] == 0) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
