#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {

        int N;
        scanf("%d", &N);

        int A[N];
        int valley[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            valley[i] = 0;
        }

        // Find original valleys
        for (int i = 1; i < N - 1; i++) {
            if (A[i] < A[i - 1] && A[i] < A[i + 1]) {
                valley[i] = 1;
            }
        }

        long long ans = 0;

        for (int i = 0; i < N; i++) {

            int value = A[i];

            if (valley[i]) {
                ans += value;
                continue;
            }

            // Left valley can flatten this position
            if (i > 0 && valley[i - 1]) {
                value = A[i - 1];
            }

            // Right valley can flatten this position
            if (i + 1 < N && valley[i + 1]) {
                if (A[i + 1] < value)
                    value = A[i + 1];
            }

            ans += value;
        }

        printf("%lld\n", ans);
    }

    return 0;
}