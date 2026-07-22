#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        static long long A[2005];
        for (int i = 1; i <= N; i++) {
            scanf("%lld", &A[i]);
        }

        long long total = N; // all single-element subarrays are deletable

        for (int L = 1; L <= N; L++) {
            long long sum = A[L];
            long long maxInterior = 0;
            for (int R = L + 1; R <= N; R++) {
                sum += A[R];
                int len = R - L + 1;
                if (len == 2) {
                    // size 2 subarrays are always deletable directly
                    total++;
                } else {
                    // len >= 3: interior is A[L+1..R-1]
                    // when R grows by 1, the newly interior element is A[R-1]
                    if (A[R - 1] > maxInterior) {
                        maxInterior = A[R - 1];
                    }
                    if (2 * maxInterior <= sum) {
                        total++;
                    }
                }
            }
        }

        printf("%lld\n", total);
    }
    return 0;
}