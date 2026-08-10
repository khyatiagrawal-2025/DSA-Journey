/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdbool.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {

    *returnSize = candiesSize;

    bool* answer = malloc(candiesSize * sizeof(bool));

    int max = candies[0];

    for(int i = 1; i < candiesSize; i++) {
        if(candies[i] > max) {
            max = candies[i];
        }
    }

    for(int i = 0; i < candiesSize; i++) {
        if(candies[i] + extraCandies >= max) {
            answer[i] = true;
        }
        else {
            answer[i] = false;
        }
    }

    return answer;
}