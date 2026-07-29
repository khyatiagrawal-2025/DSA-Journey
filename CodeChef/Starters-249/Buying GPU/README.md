# Buying GPU (GPUBUY)

## Problem Link
🔗 https://www.codechef.com/START249D/problems/GPUBUY

## Problem Statement

Chef wants to buy a GPU whose initial price is `X` coins.

Chef starts with `0` coins.

Every month, the following happens in order:

1. The GPU price increases by `Y` coins.
2. Chef earns `Z` coins.

Chef buys the GPU as soon as his total coins become greater than or equal to the current GPU price.

Determine the minimum number of months required to buy the GPU. If Chef can never afford it, print `-1`.

---

## Input Format

- The first line contains an integer `T`, the number of test cases.
- Each test case contains three space-separated integers:
  - `X` - Initial GPU price
  - `Y` - Monthly price increase
  - `Z` - Monthly earnings

---

## Output Format

For each test case, print the minimum number of months required to buy the GPU, or `-1` if it is impossible.

---

## Constraints

- `1 ≤ T ≤ 1000`
- `1 ≤ X, Y, Z ≤ 100`

---

## Example

### Input

```text
4
5 1 2
5 3 3
6 2 9
100 99 100
```

### Output

```text
5
-1
1
100
```

---

## Approach

For every month:

1. Increase the GPU price by `Y`.
2. Add `Z` coins to Chef's savings.
3. Check if Chef can buy the GPU.
4. Count the months until the condition is satisfied.

If the GPU price increases at the same rate or faster than Chef's savings (`Y >= Z`), Chef will never catch up, so print `-1`.

---

## Solution

**Language:** C

```c
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
```

---

## Complexity Analysis

- **Time Complexity:** `O(M)` where `M` is the number of months required.
- **Space Complexity:** `O(1)`

---

## Tags

`CodeChef` `Starters 249` `Simulation` `Implementation` `Beginner` `C`