char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;

    int maxLen = (i > j ? i : j) + 1;

    char* result = (char*)malloc(maxLen + 2);
    int k = maxLen;

    result[k + 1] = '\0';

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';

        if (j >= 0)
            sum += b[j--] - '0';

        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }

    return result + k + 1;
}