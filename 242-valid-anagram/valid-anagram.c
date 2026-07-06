#include <string.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {

    int n = strlen(s);
    int m = strlen(t);

    if(n != m){
        return false;
    }

    int count[26] = {0};

    for(int i = 0; i < n; i++){
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++){
        if(count[i] != 0){
            return false;
        }
    }

    return true;
}