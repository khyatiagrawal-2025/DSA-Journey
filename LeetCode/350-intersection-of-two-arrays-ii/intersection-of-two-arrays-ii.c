#include <stdlib.h>

int* intersect(int* nums1, int nums1Size,
               int* nums2, int nums2Size,
               int* returnSize) {

    int* ans = malloc(nums1Size * sizeof(int));
    int* used = calloc(nums2Size, sizeof(int));

    int count = 0;

    for(int i = 0; i < nums1Size; i++) {

        for(int j = 0; j < nums2Size; j++) {

            if(nums1[i] == nums2[j] && used[j] == 0) {

                ans[count] = nums1[i];
                count++;

                used[j] = 1;
                break;
            }
        }
    }

    *returnSize = count;

    free(used);

    return ans;
}