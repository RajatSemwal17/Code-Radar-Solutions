#include <stdio.h>

void rotateArray(int arr[], int n, int rotate) {
    for (int i = rotate; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    for (int i = 0; i < rotate; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int n, rotate;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &rotate);

    if (rotate < 0 || rotate >= n) {
        printf("Invalid index!\n");
        return 1;
    }

    rotateArray(arr, n, rotate);

    return 0;
}
