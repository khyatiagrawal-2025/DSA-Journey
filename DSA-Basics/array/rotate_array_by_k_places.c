#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n], temp[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    k = k % n;

    int j = 0;

    for(int i = n-k; i < n; i++)
        temp[j++] = arr[i];

    for(int i = 0; i < n-k; i++)
        temp[j++] = arr[i];

    for(int i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}