#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);

        if (Y >= Z) {
            printf("-1\n");
            continue;
        }

        int price = X;
        int coins = 0;
        int months = 0;

        while (coins < price) {
            price += Y;
            coins += Z;
            months++;
        }

        printf("%d\n", months);
    }

    return 0;
}