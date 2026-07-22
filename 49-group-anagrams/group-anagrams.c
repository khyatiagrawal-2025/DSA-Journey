/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
#include <string.h>

int cmpChar(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

typedef struct {
    char *key;
    int index;
} Node;

char*** groupAnagrams(char** strs, int strsSize, int* returnSize, int** returnColumnSizes) {

    Node map[10000];
    int groups = 0;

    char ***ans = (char ***)malloc(strsSize * sizeof(char **));
    *returnColumnSizes = (int *)malloc(strsSize * sizeof(int));

    for (int i = 0; i < strsSize; i++) {

        char *temp = (char *)malloc((strlen(strs[i]) + 1) * sizeof(char));
        strcpy(temp, strs[i]);

        qsort(temp, strlen(temp), sizeof(char), cmpChar);

        int found = -1;

        for (int j = 0; j < groups; j++) {
            if (strcmp(map[j].key, temp) == 0) {
                found = j;
                break;
            }
        }

        if (found == -1) {
            map[groups].key = temp;
            map[groups].index = groups;

            ans[groups] = (char **)malloc(strsSize * sizeof(char *));
            (*returnColumnSizes)[groups] = 0;

            found = groups;
            groups++;
        } else {
            free(temp);
        }

        ans[found][(*returnColumnSizes)[found]++] = strs[i];
    }

    *returnSize = groups;
    return ans;
}