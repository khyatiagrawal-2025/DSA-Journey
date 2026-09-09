#include <stdio.h>
void insertAtPosition(int arr[], int n, int cap, int pos, int x) {
    if (n == cap) {
        return;
    }
    for(int i = n-1; i >= pos; i--) {
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
}
int main() {
    int arr[10] = {1, 2, 3, 4};
    int n = 4;
    insertAtPosition(arr, n, 10, 2, 5);
    n++;
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}