# Product Exceed (PRDEXC)

## Problem Link
🔗 https://www.codechef.com/START249D/problems/PRDEXC

## Problem Statement

You are given three integers `X`, `Y`, and `P`.

In one move, you can perform exactly one of the following operations:

- Increment `X` by `1`, or
- Increment `Y` by `1`.

Find the minimum number of moves required so that:

`X × Y ≥ P`

---

## Input Format

- The first line contains an integer `T`, the number of test cases.
- Each test case contains three space-separated integers:
  - `X`
  - `Y`
  - `P`

---

## Output Format

For each test case, print the minimum number of moves required.

---

## Constraints

- `1 ≤ T ≤ 1000`
- `1 ≤ X, Y ≤ 50`
- `1 ≤ P ≤ 10^4`

---

## Example

### Input

```text
3
5 3 17
2 7 10
9 1 29
```

### Output

```text
1
0
3
```

---

## Approach

- If the current product is already greater than or equal to `P`, the answer is `0`.
- Otherwise, try every possible way of increasing `X` and `Y`.
- For every pair of increments `(i, j)`, check whether:

```text
(X + i) × (Y + j) ≥ P
```

- Among all valid pairs, choose the minimum value of `i + j`.

Since `X` and `Y` are at most `50`, checking all possibilities is efficient.

---

## Solution

**Language:** C

```c
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, P;
        scanf("%d %d %d", &X, &Y, &P);

        int ans = 1000000;

        for (int i = 0; i <= 200; i++) {
            for (int j = 0; j <= 200; j++) {
                if ((X + i) * (Y + j) >= P) {
                    if (i + j < ans)
                        ans = i + j;
                }
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
```

---

## Complexity Analysis

- **Time Complexity:** `O(200 × 200)` per test case (constant time)
- **Space Complexity:** `O(1)`

---

## Tags

`CodeChef` `Starters 249` `Brute Force` `Implementation` `Math` `C`