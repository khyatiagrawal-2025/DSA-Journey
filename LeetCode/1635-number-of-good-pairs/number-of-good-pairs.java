class Solution {
    public int numIdenticalPairs(int[] nums) {
        int count = 0;
        int[] freq = new int[101]; // Constraints: nums[i] <= 100
        
        for (int num : nums) {
            // Add existing count of this number to total pairs
            // before incrementing its frequency
            count += freq[num];
            freq[num]++;
        }
        
        return count;
    }
}
