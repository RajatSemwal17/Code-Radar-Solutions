#include <stdio.h>

void rotateArray(int arr[], int n, int rotate) {
    // Print elements from rotate index to end
    for (int i = rotate; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    // Print elements from start to rotate-1
    for (int i = 0; i < rotate; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int n, rotate;

    // Input array size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input rotation index
    scanf("%d", &rotate);

    // Validate rotation index
    if (rotate < 0 || rotate >= n) {
        printf("Invalid index!\n");
        return 1;
    }

    // Rotate and print the array
    rotateArray(arr, n, rotate);

    return 0;
}
