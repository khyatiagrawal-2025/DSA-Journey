#include <stdlib.h>
/*
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
*/

int* intersect(int* nums1, int nums1Size,
               int* nums2, int nums2Size,
               int* returnSize) {

    int count[1001] = {0};

    int* ans = malloc(nums1Size * sizeof(int));
    int k = 0;

    for(int i = 0; i < nums1Size; i++) {
        count[nums1[i]]++;
    }

    for(int i = 0; i < nums2Size; i++) {

        if(count[nums2[i]] > 0) {

            ans[k] = nums2[i];
            k++;

            count[nums2[i]]--;
        }
    }

    *returnSize = k;

    return ans;
}