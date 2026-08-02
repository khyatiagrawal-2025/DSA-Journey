#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int findContentChildren(int* g, int gSize, int* s, int sSize) {

    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);

    int i = 0;
    int j = 0;

    while(i < gSize && j < sSize) {

        if(s[j] >= g[i]) {
            i++;
        }

        j++;
    }

    return i;
}

/*
#include <stdbool.h>

int findContentChildren(int* g, int gSize, int* s, int sSize) {

    bool used[1000] = {false};
    int count = 0;

    for(int i = 0; i < gSize; i++) {

        for(int j = 0; j < sSize; j++) {

            if(!used[j] && s[j] >= g[i]) {
                used[j] = true;
                count++;
                break;
            }
        }
    }

    return count;
}
*/