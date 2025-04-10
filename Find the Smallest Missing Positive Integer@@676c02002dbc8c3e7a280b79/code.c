#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100]; // safe size for inputs
    int hash[101] = {0}; // because numbers can go from 0 to n (inclusive)
    int missing = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] <= n) {
            hash[arr[i]]++; // only increment if arr[i] is within range
        }
    }

    for (int i = 0; i <= n; i++) {
        if (hash[i] == 0) {
            missing = i;
            break;
        }
    }

    printf("%d\n", missing);
    return 0;
}
