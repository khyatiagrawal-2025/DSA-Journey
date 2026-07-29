#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        long long A[N];

        for (int i = 0; i < N; i++) {
            scanf("%lld", &A[i]);
        }

        long long low = -1;
        long long high = 10000000000LL;

        int possible = 1;

        for (int i = 0; i < N / 2; i++) {

            long long a = A[i];
            long long b = A[N - 1 - i];

            if (a > b) {
                long long temp = a;
                a = b;
                b = temp;
            }

            long long diff = b - a;

            if (diff == 0) {
                continue;
            }

            // Difference of 1 can never become equal
            if (diff == 1 || diff > 2) {
                possible = 0;
                break;
            }

            // Difference of 2 => X must be a or a+1
            if (diff == 2) {
                long long l = a;
                long long r = a + 1;

                if (l > low)
                    low = l;

                if (r < high)
                    high = r;

                if (low > high) {
                    possible = 0;
                    break;
                }
            }
        }

        printf(possible ? "Yes\n" : "No\n");
    }

    return 0;
}