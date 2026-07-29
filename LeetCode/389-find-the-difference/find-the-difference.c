char findTheDifference(char* s, char* t) {

    int sum = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        sum += s[i];
    }

    for(int i = 0; t[i] != '\0'; i++) {
        sum -= t[i];
    }

    return (char)(-sum);
}