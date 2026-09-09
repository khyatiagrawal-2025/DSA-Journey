#include <stdio.h>

// TC --> O(1)

void insertAnElement(int arr[], int n, int cap, int x) {
    if (n == cap) return;
    arr[n] = x;
}

int main() {
    int arr[10] = {1, 2, 3, 4};
    int n = 4;
    insertAnElement(arr, n, 10, 5);
    n++;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}