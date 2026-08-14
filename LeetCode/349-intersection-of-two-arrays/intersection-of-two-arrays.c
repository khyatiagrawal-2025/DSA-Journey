#include <stdlib.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    int* ans = malloc(nums1Size * sizeof(int));
    int seen[1001] = {0};
    int count = 0;

    for(int i = 0; i < nums1Size; i++) {
        seen[nums1[i]] = 1;
    }

    for(int i = 0; i < nums2Size; i++) {
        if(seen[nums2[i]] == 1) {
            ans[count++] = nums2[i];
            seen[nums2[i]] = 0;
        }
    }

    *returnSize = count;

    return ans;
}