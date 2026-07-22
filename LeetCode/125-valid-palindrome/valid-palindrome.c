#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* s) {
    int n = strlen(s);
    int left = 0;
    int right = n-1;
    while(left<right){

        // Left se special characters skip karo
        while(left < right && !isalnum(s[left]))
        {
            left++;
        }

        // Right se special characters skip karo
        while(left < right && !isalnum(s[right]))
        {
            right--;
        }

        // Dono characters ko lowercase me compare karo
        if(tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }

        // Dono pointers ko aage badhao
        left++;
        right--;

    }
    return true;
}