# Average Survival

> **Platform:** CodeChef  
> **Contest:** Starters 248  
> **Problem Code:** AVGSURV  
> **Difficulty:** Easy

---

## 🔗 Problem Link

https://www.codechef.com/START248D/problems/AVGSURV

---

# 📝 Problem Summary

You are given an array of **N** integers.

You may repeatedly perform the following operation:

- Choose an element that is **strictly smaller than the current average** of the array.
- Remove that element from the array.
- The average is recalculated after every deletion.

Your task is to determine the **minimum possible length** of the array after performing any number of valid operations.

---

# 📥 Input Format

- The first line contains an integer `T`, representing the number of test cases.
- For each test case:
  - The first line contains an integer `N`.
  - The second line contains `N` integers representing the array.

---

# 📤 Output Format

For each test case, print the minimum possible length of the remaining array.

---

# 📌 Constraints

| Constraint | Value |
|------------|-------|
| 1 ≤ T ≤ 100 |
| 2 ≤ N ≤ 100 |
| 1 ≤ Ai ≤ 100 |

---

# 💡 Key Observation

The **largest element** in the array can never be removed because it is never strictly smaller than the current average.

Therefore:

- If the maximum element appears **only once**, every other element can eventually be removed.
- If the maximum element appears multiple times, all occurrences of the maximum remain in the final array.

Hence, the answer is simply:

```text
Frequency of the maximum element
```

---

# 🚀 Approach

1. Read the array.
2. Find the maximum element.
3. Count how many times the maximum element appears.
4. Print this count as the answer.

---

# ⏱ Complexity

- **Time Complexity:** `O(N)`
- **Space Complexity:** `O(1)`

---

# 📌 Sample Input

```text
2
3
1 2 3
3
5 5 5
```

### Sample Output

```text
1
3
```

---

# 📖 Explanation

### Test Case 1

Array:

```text
1 2 3
```

Average = **2**

Remove **1**

Array becomes

```text
2 3
```

Average = **2.5**

Remove **2**

Remaining array:

```text
3
```

Answer:

```text
1
```

---

### Test Case 2

Array:

```text
5 5 5
```

Average = **5**

No element is strictly smaller than the average.

Therefore, no deletions are possible.

Answer:

```text
3
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
```

---

# 🎯 What I Learned

- Understanding how the average changes after every deletion.
- Identifying an invariant (the maximum element always survives).
- Solving the problem using observation instead of simulation.
- Counting the frequency of the maximum element efficiently.

---

# ✅ Status

Accepted on CodeChef