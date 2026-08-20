class Solution {
    public void rotate(int[] nums, int k) {
        // Your code here
    int n = nums.length;
    k = k % n;   // important for large k

    int[] temp = new int[n];
    int index = 0;

    // last k elements
    for(int i = n - k; i < n; i++){
        temp[index++] = nums[i];
    }

    // remaining elements
    for(int i = 0; i < n - k; i++){
        temp[index++] = nums[i];
    }

    // copy back
    for(int i = 0; i < n; i++){
        nums[i] = temp[i];
    }
}
}
