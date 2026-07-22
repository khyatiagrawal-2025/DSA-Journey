#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[105];

        for (int i = 0; i < N; i++)
            scanf("%d", &A[i]);

        int changed;

        do {
            changed = 0;

            for (int i = 0; i < N - 1; i++) {
                if (A[i] > A[i + 1] && A[i] + A[i + 1] <= 2) {
                    int temp = A[i];
                    A[i] = A[i + 1];
                    A[i + 1] = temp;
                    changed = 1;
                }
            }

        } while (changed);

        for (int i = 0; i < N; i++) {
            printf("%d", A[i]);
            if (i != N - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}