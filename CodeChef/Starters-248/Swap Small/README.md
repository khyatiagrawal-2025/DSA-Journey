# Swap Small

> **Platform:** CodeChef  
> **Contest:** Starters 248  
> **Problem Code:** SWAPSMALL  
> **Difficulty:** Easy

---

## 🔗 Problem Link

https://www.codechef.com/START248D/problems/SWAPSM

---

# 📝 Problem Summary

You are given an array consisting of integers where each element is either **0**, **1**, or **2**.

You may perform the following operation any number of times:

- Choose two adjacent elements whose **sum is at most 2**.
- Swap those two elements.

Your goal is to obtain the **lexicographically smallest possible array** after performing any valid sequence of swaps.

---

# 📥 Input Format

- The first line contains an integer `T` — the number of test cases.
- For each test case:
  - The first line contains an integer `N`.
  - The second line contains `N` integers representing the array.

---

# 📤 Output Format

For each test case, print the lexicographically smallest array that can be obtained.

---

# 📌 Constraints

| Constraint | Value |
|------------|-------|
| 1 ≤ T ≤ 100 |
| 2 ≤ N ≤ 100 |
| 0 ≤ Ai ≤ 2 |

---

# 💡 Key Observation

A swap is allowed **only if the sum of two adjacent elements is less than or equal to 2**.

Possible valid swaps:

| Pair | Sum | Swap Allowed |
|------|-----|--------------|
| 0 0 | 0 | ✅ |
| 0 1 | 1 | ✅ |
| 0 2 | 2 | ✅ |
| 1 1 | 2 | ✅ |
| 1 2 | 3 | ❌ |
| 2 2 | 4 | ❌ |

To obtain the lexicographically smallest array, we repeatedly perform every valid swap that moves a smaller element to the left until no further improvement is possible.

---

# 🚀 Approach

1. Read the array.
2. Traverse the array from left to right.
3. Whenever:
   - `A[i] > A[i+1]`
   - and `A[i] + A[i+1] ≤ 2`
   
   swap the two elements.
4. Continue repeating the process until no swaps occur during a complete traversal.
5. Print the final array.

This approach works similarly to **Bubble Sort**, but swaps are performed only when they satisfy the given condition.

---

# ⏱ Complexity

- **Time Complexity:** `O(N²)`
- **Space Complexity:** `O(1)`

---

# 📌 Sample Input

```text
2
4
1 0 2 1
5
2 2 2 0 0
```

### Sample Output

```text
0 1 2 1
0 0 2 2 2
```

---

# 📖 Explanation

### Test Case 1

Initial array:

```text
1 0 2 1
```

The first two elements can be swapped because:

```text
1 + 0 = 1 ≤ 2
```

After swapping:

```text
0 1 2 1
```

No further valid swap can produce a smaller lexicographical order.

---

### Test Case 2

Initial array:

```text
2 2 2 0 0
```

The two zeros gradually move left by swapping with adjacent twos (since `2 + 0 = 2` is allowed).

Final array:

```text
0 0 2 2 2
```

---

# 🛠 Solution

```c
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
```

---

# 🎯 What I Learned

- Understanding lexicographical ordering.
- Applying conditional adjacent swaps.
- Simulating repeated operations until no further improvement is possible.
- Using a Bubble Sort–style process with custom swap conditions.

---

# ✅ Status

Accepted on CodeChef