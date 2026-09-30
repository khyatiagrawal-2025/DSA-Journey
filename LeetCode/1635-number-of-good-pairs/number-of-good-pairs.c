int numIdenticalPairs(int* nums, int numsSize) {
    int count[101] = {0}; 
    int goodPairs = 0;
    
    for (int i = 0; i < numsSize; i++) {
        // Add the number of times this element has been seen before
        goodPairs += count[nums[i]];
        // Increment the count of this element
        count[nums[i]]++;
    }
    
    return goodPairs;
}