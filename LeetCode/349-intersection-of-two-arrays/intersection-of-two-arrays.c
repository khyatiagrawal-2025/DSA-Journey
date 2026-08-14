/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    int* ans = malloc(nums1Size * sizeof(int));
    int count = 0;

    for(int i = 0; i < nums1Size; i++) {

        int found = 0;

        // Check if nums1[i] is already in answer
        for(int j = 0; j < count; j++) {
            if(ans[j] == nums1[i]) {
                found = 1;
                break;
            }
        }

        if(found) {
            continue;
        }

        // Check if nums1[i] exists in nums2
        for(int j = 0; j < nums2Size; j++) {

            if(nums1[i] == nums2[j]) {
                ans[count] = nums1[i];
                count++;
                break;
            }
        }
    }

    *returnSize = count;

    return ans;
}