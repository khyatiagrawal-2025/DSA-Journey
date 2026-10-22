
#include <stdio.h>

void quickSort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }

    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[end];
    arr[end] = arr[i + 1];
    arr[i + 1] = temp;

    int p = i + 1;

    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
