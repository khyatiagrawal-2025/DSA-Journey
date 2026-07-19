void moveZeroes(int* nums, int numsSize) {

    int right = 0;

    for(int left = 0; left < numsSize; left++) {

        if(nums[left] != 0) {

            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;

            right++;
        }
    }
}