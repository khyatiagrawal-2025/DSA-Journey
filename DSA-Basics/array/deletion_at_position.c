#include <stdio.h>
int delete(int arr[], int n, int x) {
    int pos;
    for (pos = 0; pos < n; pos++) {
        if (arr[pos] == x)
            break;
    }
    if (pos == n)
        return n;
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}
int main() {
    int arr[10] = {1, 2, 3, 4};
    int n = 4;
    n = delete(arr, n, 3);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}