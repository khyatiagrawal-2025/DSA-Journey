char* convert(char* s, int numRows) {
    if (numRows == 1 || numRows >= strlen(s)) {
        return s;
    }

    int len = strlen(s);
    char *result = (char *)malloc((len + 1) * sizeof(char));
    int index = 0;
    int cycle = 2 * numRows - 2;

    for (int row = 0; row < numRows; row++) {
        for (int j = 0; j + row < len; j += cycle) {
            result[index++] = s[j + row];

            if (row != 0 && row != numRows - 1) {
                int diagonal = j + cycle - row;
                if (diagonal < len) {
                    result[index++] = s[diagonal];
                }
            }
        }
    }

    result[index] = '\0';
    return result;
}

