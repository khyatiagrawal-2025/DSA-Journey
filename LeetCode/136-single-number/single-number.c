int singleNumber(int* nums, int numsSize) {

    int ans = 0;

    for(int i = 0; i < numsSize; i++) {
        ans = ans ^ nums[i];
    }

    return ans;
}


/*
int singleNumber(int* nums, int numsSize) {

    for(int i = 0; i < numsSize; i++) {

        int count = 0;

        for(int j = 0; j < numsSize; j++) {

            if(nums[i] == nums[j]) {
                count++;
            }
        }

        if(count == 1) {
            return nums[i];
        }
    }

    return 0;
}
*/