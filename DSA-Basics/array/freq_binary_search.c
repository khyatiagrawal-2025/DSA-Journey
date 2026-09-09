#include <stdio.h>
int main(){
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    int ans[2] = {-1, -1};
    // First occurrence
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            ans[0] = i;
            break;
        }
    }
    // Last occurrence
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == target) {
            ans[1] = i;
            break;
        }
    }
    printf("[%d, %d]\n", ans[0], ans[1]);
    return 0;
}