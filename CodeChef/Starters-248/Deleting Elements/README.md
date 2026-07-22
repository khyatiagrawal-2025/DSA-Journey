# Deleting Elements (Easy)

> **Platform:** CodeChef  
> **Contest:** Starters 248  
> **Problem Code:** DELELE2  
> **Difficulty:** Medium

---

# 🔗 Problem Link

https://www.codechef.com/START248D/problems/DELELE2

---

# 📝 Problem Summary

You are given an array **A** of **N** elements.

A subarray is said to be **deletable** if it can be reduced to a size of **2 or less** by repeatedly performing the following operation:

- Choose an **interior element** (not the first or last element).
- The chosen element can be deleted only if:

```text
A[i-1] + A[i+1] ≥ A[i]
```

- Before deleting it, distribute its value between its left and right neighbours.

The task is to count how many subarrays of the given array are deletable.

---

# 📥 Input Format

- The first line contains an integer `T` — the number of test cases.
- For each test case:
  - The first line contains an integer `N`.
  - The second line contains `N` integers representing the array.

---

# 📤 Output Format

For each test case, print the number of deletable subarrays.

---

# 📌 Constraints

| Constraint | Value |
|------------|-------|
| 1 ≤ T ≤ 400 |
| 3 ≤ N ≤ 2000 |
| 1 ≤ Ai ≤ 10⁹ |
| Sum of N over all test cases ≤ 2000 |

---

# 💡 Key Observation

Some important observations make this problem much easier:

- Every subarray of length **1** or **2** is automatically deletable.
- For longer subarrays, only the **interior elements** matter because the first and last elements can never be deleted.
- Instead of simulating every deletion, we only need to check one condition.

For a subarray:

```text
[L ... R]
```

Let

- **S = Sum of all elements**
- **M = Maximum interior element**

The subarray is deletable **if and only if**

```text
2 × M ≤ S
```

This observation avoids expensive simulation and allows us to solve the problem efficiently.

---

# 🚀 Approach

For every test case:

### Step 1

Every subarray of length **1** is already deletable.

Initialize

```text
answer = N
```

---

### Step 2

Fix the left endpoint `L`.

Extend the right endpoint `R` one element at a time.

While extending,

- Maintain the running sum.
- Maintain the maximum interior element.

---

### Step 3

For every subarray:

- If length is **2**, count it directly.
- Otherwise check

```text
2 × maxInterior ≤ sum
```

If true,

increment the answer.

---

### Step 4

Print the total count.

---

# ✅ Why This Works

The two endpoints of a subarray are never deleted.

Every interior element except the largest one can always be removed first.

Finally, the largest interior element can also be removed **only if**

```text
largestInterior ≤ remainingSum
```

which is equivalent to

```text
2 × largestInterior ≤ totalSum
```

Therefore, checking this single condition is sufficient.

---

# ⏱ Complexity

### Time Complexity

```text
O(N²)
```

Each left endpoint expands to every possible right endpoint once.

---

### Space Complexity

```text
O(N)
```

Only the input array is stored.

---

# 📌 Sample Input

```text
3
3
2 4 1
4
2 3 2 3
7
5 1 3 1 10 2 1
```

---

# 📌 Sample Output

```text
5
10
21
```

---

# 📖 Explanation

### Test Case 1

Array:

```text
2 4 1
```

There are

```text
6
```

possible subarrays.

All are deletable except

```text
[2,4,1]
```

because

```text
2 × 4 > 7
```

Answer

```text
5
```

---

### Test Case 2

Array

```text
2 3 2 3
```

Every subarray satisfies the required condition.

Answer

```text
10
```

---

### Test Case 3

Array

```text
5 1 3 1 10 2 1
```

Exactly

```text
21
```

subarrays are deletable.

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

        static long long A[2005];

        for (int i = 1; i <= N; i++)
            scanf("%lld", &A[i]);

        long long total = N;

        for (int L = 1; L <= N; L++) {

            long long sum = A[L];
            long long maxInterior = 0;

            for (int R = L + 1; R <= N; R++) {

                sum += A[R];
                int len = R - L + 1;

                if (len == 2) {
                    total++;
                }
                else {

                    if (A[R - 1] > maxInterior)
                        maxInterior = A[R - 1];

                    if (2 * maxInterior <= sum)
                        total++;
                }
            }
        }

        printf("%lld\n", total);
    }

    return 0;
}
```

---

# 🎯 What I Learned

- Solving problems using mathematical observations instead of direct simulation.
- Maintaining prefix-style running information while expanding a subarray.
- Keeping track of the running sum and maximum interior element efficiently.
- Applying an **O(N²)** solution using incremental updates instead of checking each subarray from scratch.

---

# 🧠 Key Insight

Instead of simulating every deletion operation, the problem can be reduced to checking a simple condition:

```text
2 × (Maximum Interior Element) ≤ (Sum of Subarray)
```

This transforms a seemingly complex process into an efficient implementation.

---

# ✅ Status

Accepted on CodeChef