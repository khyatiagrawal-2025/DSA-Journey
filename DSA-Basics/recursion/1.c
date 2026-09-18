#include <stdio.h>

void fun(int n) {
    if (n == 0) {
        printf(" Happyyyy Birthdayyyyy \n");
        return;
    }
    printf("%d days lefttttttttttt \n", n);
    fun(n - 1);
}

int main() {
    fun(1000);
    return 0;
}