int pivotIndex(int* nums, int numsSize) {

    int total = 0;

    for(int i = 0; i < numsSize; i++) {
        total += nums[i];
    }

    int leftSum = 0;

    for(int i = 0; i < numsSize; i++) {

        if(leftSum == total - leftSum - nums[i]) {
            return i;
        }

        leftSum += nums[i];
    }

    return -1;
}