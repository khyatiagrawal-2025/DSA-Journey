#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int max = 0, count = 0;

        for (int i = 0; i < N; i++) {
            int x;
            scanf("%d", &x);

            if (x > max) {
                max = x;
                count = 1;
            } else if (x == max) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}