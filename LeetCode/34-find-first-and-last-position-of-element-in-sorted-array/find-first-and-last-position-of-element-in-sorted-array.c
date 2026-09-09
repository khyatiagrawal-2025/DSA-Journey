int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

    int *ans = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    ans[0] = -1;
    ans[1] = -1;

    // Find first occurrence
    int start = 0, end = numsSize - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            ans[0] = mid;
            end = mid - 1;       // go left
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    // Find last occurrence
    start = 0;
    end = numsSize - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            ans[1] = mid;
            start = mid + 1;     // go right
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}