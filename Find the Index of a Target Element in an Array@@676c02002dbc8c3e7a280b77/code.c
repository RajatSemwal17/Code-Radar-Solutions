#include <stdio.h>

void index(int arr[], int n, int target) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("%d ", i);  // Print the index of the target
            found = 1;
        }
    }
    if (!found) {
        printf("-1");
    }
}

int main() {
    int n, target;
    scanf("%d", &n);  // Input size of array
    int arr[n];

    // Input elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Corrected: no extra space after %d
    }

    scanf("%d", &target);  // Input the target number
    index(arr, n, target);  // Find and print the indices of the target

    return 0;
}
