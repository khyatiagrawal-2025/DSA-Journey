class Solution {
    public int findNumbers(int[] nums) {

        int count = 0;

        for(int i = 0; i < nums.length; i++) {

            int num = nums[i];
            int digits = 0;

            while(num > 0) {
                digits++;
                num = num / 10;
            }

            if(digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
}