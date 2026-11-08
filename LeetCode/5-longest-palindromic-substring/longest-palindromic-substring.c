#include <stdio.h>
#include <string.h>

// Helper function to expand around center (left, right)
int expandAroundCenter(char* s, int left, int right) {
    while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1; // length of the palindromic substring
}

char* longestPalindrome(char* s) {
    if (s == NULL || *s == '\n') return "";
    
    int start = 0;
    int end = 0;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        // Odd length palindrome (single character center)
        int len1 = expandAroundCenter(s, i, i);
        // Even length palindrome (between two characters center)
        int len2 = expandAroundCenter(s, i, i + 1);
        
        int maxLen = (len1 > len2) ? len1 : len2;
        
        if (maxLen > (end - start)) {
            start = i - (maxLen - 1) / 2;
            end = i + maxLen / 2;
        }
    }
    
    // Allocate memory for the result substring
    static char result[1005];
    int subLen = end - start + 1;
    strncpy(result, s + start, subLen);
    result[subLen] = '\0';
    
    return result;
}