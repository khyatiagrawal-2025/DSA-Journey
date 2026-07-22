#include <string.h>

int lengthOfLastWord(char* s) {

    int n = strlen(s);
    int count = 0;

    for(int i = n - 1; i >= 0; i--) {

        if(s[i] == ' ') {

            if(count == 0) {
                continue;
            }
            else {
                break;
            }
        }

        count++;
    }

    return count;
}