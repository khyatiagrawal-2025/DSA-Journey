class Solution {
    public int[] searchRange(int[] nums, int target) {

        int[] result = new int[2];

        result[0] = binarySearch(nums, target, true);
        result[1] = binarySearch(nums, target, false);

        return result;
    }

    public int binarySearch(int[] nums, int target, boolean firstValue) {

        int left = 0;
        int right = nums.length - 1;
        int answer = -1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {

                answer = mid;

                if (firstValue)
                    right = mid - 1;
                else
                    left = mid + 1;

            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return answer;
    }
}