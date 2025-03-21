#include <stdio.h>
#include <stdbool.h>

#define MAX 100001  // Assumption of max positive value (modify for negatives)

void pairOfSum(int arr[], int n, int sum) {
    bool hash[MAX] = {false};  // Tracks visited numbers

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                // Print only if this exact pair hasn't been printed before
                if (!hash[arr[i]] && !hash[arr[j]]) {
                    printf("Pair: %d %d\n", arr[i], arr[j]);
                    hash[arr[i]] = true;
                    hash[arr[j]] = true;
                }
            }
        }
    }
}

int main() {
    int n, sum;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &sum);
    pairOfSum(arr, n, sum);

    return 0;
}
