int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int max = 0;

    for (int i = 0; i < n; i++) {
        int seen[256] = {0};
        int count = 0;

        for (int j = i; j < n; j++) {
            if (seen[(unsigned char)s[j]] == 1) {
                break;
            }

            seen[(unsigned char)s[j]] = 1;
            count++;
        }

        if (count > max) {
            max = count;
        }
    }

    return max;
}