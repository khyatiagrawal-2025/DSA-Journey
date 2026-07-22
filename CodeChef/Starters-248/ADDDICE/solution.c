#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int second = 9 - X;

    if (second >= 1 && second <= 6)
        printf("Yes");
    else
        printf("No");

    return 0;
}