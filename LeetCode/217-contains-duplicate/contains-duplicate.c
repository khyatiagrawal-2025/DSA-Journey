/*
bool containsDuplicate(int* nums, int numsSize) {
    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i] == nums[j]){
                return true;
            }
        }
    }
    return false;
}
*/

#include <stdlib.h>
#include <stdbool.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

bool containsDuplicate(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), compare);

    for(int i = 1; i < numsSize; i++)
    {
        if(nums[i] == nums[i - 1])
        {
            return true;
        }
    }

    return false;
}