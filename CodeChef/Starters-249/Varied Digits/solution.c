#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int tens = X / 10;
    int units = X % 10;

    if (tens != units)
        printf("Yes");
    else
        printf("No");

    return 0;
}