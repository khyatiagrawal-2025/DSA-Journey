#include <stdlib.h>

int oddCells(int m, int n, int** indices, int indicesSize, int* indicesColSize) {

    int row[50] = {0};
    int col[50] = {0};

    for(int i = 0; i < indicesSize; i++) {
        row[indices[i][0]]++;
        col[indices[i][1]]++;
    }

    int count = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if((row[i] + col[j]) % 2 != 0)
                count++;
        }
    }

    return count;
}