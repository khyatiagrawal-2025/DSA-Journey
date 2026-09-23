#include <stdio.h>

void fun(int n) {

    if (n == 0) {
        printf("Happyyyy Birthdayyyyy \n");
        return;
    }

    for (int i = 0; i < 1; i++) {
        printf("%d days lefttttttttttt\n", n);
    }

    fun(n - 1);
}

int main() {
    fun(3);
    return 0;
}