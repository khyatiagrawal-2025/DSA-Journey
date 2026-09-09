int search(int* nums, int numsSize, int target) {
    int start = 0, end = numsSize - 1;

    while (start <= end) {
        int half = start + (end - start) / 2;

        if (nums[half] == target) {
            return half;
        }
        else if (nums[half] < target) {
            start = half + 1;
        }
        else {
            end = half - 1;
        }
    }

    return -1;
}