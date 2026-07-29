# Up-Down Palindrome (UPDWPAL)

## Problem Link
🔗 https://www.codechef.com/START249D/problems/UPDWPAL

## Problem Statement

You are given an array `A` of length `N`.

You may perform **at most one operation**:

- Choose an integer `X`.
- For every element:
  - If `A[i] ≤ X`, increase `A[i]` by `1`.
  - Otherwise, decrease `A[i]` by `1`.

Determine whether it is possible to make the array a palindrome after performing the operation at most once.

---

## Input Format

- The first line contains an integer `T`, the number of test cases.
- For each test case:
  - The first line contains an integer `N`.
  - The second line contains `N` space-separated integers.

---

## Output Format

For each test case, print:

- `Yes` if it is possible to obtain a palindrome.
- `No` otherwise.

---

## Constraints

- `1 ≤ T ≤ 10^5`
- `1 ≤ N ≤ 2 × 10^5`
- `1 ≤ A[i] ≤ 10^9`
- Sum of `N` over all test cases does not exceed `2 × 10^5`.

---

## Example

### Input

```text
3
3
1 3 1
4
4 3 5 6
4
4 2 4 1
```

### Output

```text
Yes
Yes
No
```

---

## Approach

For every symmetric pair `(A[i], A[j])`:

- If the values are equal, they can always remain equal.
- If the values differ by more than `2`, it is impossible.
- Otherwise, determine the interval of values of `X` that makes both elements equal after the operation.
- Intersect all valid intervals.
- If the intersection is non-empty, print `Yes`; otherwise print `No`.

---

## Solution

**Language:** C

```c
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        long long A[N];
        for (int i = 0; i < N; i++)
            scanf("%lld", &A[i]);

        long long L = -1000000000000000000LL;
        long long R = 1000000000000000000LL;
        int possible = 1;

        for (int i = 0; i < N / 2; i++) {
            long long a = A[i];
            long long b = A[N - 1 - i];

            if (a == b)
                continue;

            if (a > b) {
                long long temp = a;
                a = b;
                b = temp;
            }

            if (b - a > 2) {
                possible = 0;
                break;
            }

            if (b - a == 1) {
                if (L < a)
                    L = a;
                if (R > b - 1)
                    R = b - 1;
            } else if (b - a == 2) {
                if (L < a + 1)
                    L = a + 1;
                if (R > a + 1)
                    R = a + 1;
            }

            if (L > R) {
                possible = 0;
                break;
            }
        }

        printf(possible ? "Yes\n" : "No\n");
    }

    return 0;
}
```

---

## Complexity Analysis

- **Time Complexity:** `O(N)` per test case
- **Space Complexity:** `O(N)`

---

## Tags

`CodeChef` `Starters 249` `Greedy` `Intervals` `Implementation` `C`