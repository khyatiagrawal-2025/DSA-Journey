# Pass

> **Platform:** CodeChef  
> **Contest:** Starters 248  
> **Problem Code:** PASS  
> **Difficulty:** Beginner

---

## 🔗 Problem Link

https://www.codechef.com/START248D/problems/PASS

---

# 📝 Problem Summary

Chef appeared for **5 exams**, each scored out of **100**.

To receive a **Pass Certificate**, both of the following conditions must be satisfied:

- Chef must score **at least 60 marks in at least 2 exams**.
- Chef must score **at least 30 marks in at least 4 exams**.

Determine whether Chef **Passes** or **Fails** based on these conditions.

---

# 📥 Input Format

- The first line contains an integer `T`, representing the number of test cases.
- For each test case:
  - A single line contains **5 integers**, representing Chef's marks in the five exams.

---

# 📤 Output Format

For each test case, print:

- `Pass` if Chef satisfies both conditions.
- `Fail` otherwise.

---

# 📌 Constraints

| Constraint | Value |
|------------|-------|
| 1 ≤ T ≤ 100 |
| 0 ≤ Ai ≤ 100 |

---

# 💡 Key Observation

We only need to count:

- Number of exams having marks **greater than or equal to 60**.
- Number of exams having marks **greater than or equal to 30**.

If:

```text
count60 ≥ 2
```

and

```text
count30 ≥ 4
```

then Chef passes.

Otherwise, Chef fails.

---

# 🚀 Approach

1. Read the number of test cases.
2. For each test case:
   - Read the five exam scores.
   - Count how many scores are at least **60**.
   - Count how many scores are at least **30**.
3. Check both conditions.
4. Print **Pass** if both are satisfied; otherwise print **Fail**.

---

# ⏱ Complexity

- **Time Complexity:** `O(1)` per test case (only 5 scores are processed)
- **Space Complexity:** `O(1)`

---

# 📌 Sample Input

```text
4
95 98 100 96 99
32 60 30 65 23
50 50 50 50 50
90 90 29 15 90
```

### Sample Output

```text
Pass
Pass
Fail
Fail
```

---

# 📖 Explanation

### Test Case 1

Marks:

```text
95 98 100 96 99
```

- Scores ≥ 60 = **5**
- Scores ≥ 30 = **5**

Both conditions are satisfied.

Output:

```text
Pass
```

---

### Test Case 2

Marks:

```text
32 60 30 65 23
```

- Scores ≥ 60 = **2**
- Scores ≥ 30 = **4**

Chef satisfies both conditions.

Output:

```text
Pass
```

---

### Test Case 3

Marks:

```text
50 50 50 50 50
```

- Scores ≥ 60 = **0**
- Scores ≥ 30 = **5**

The first condition is not satisfied.

Output:

```text
Fail
```

---

# 🛠 Solution

```c
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int score;
        int count60 = 0, count30 = 0;

        for (int i = 0; i < 5; i++) {
            scanf("%d", &score);

            if (score >= 60)
                count60++;

            if (score >= 30)
                count30++;
        }

        if (count60 >= 2 && count30 >= 4)
            printf("Pass\n");
        else
            printf("Fail\n");
    }

    return 0;
}
```

---

# 🎯 What I Learned

- Counting elements that satisfy multiple conditions.
- Using counters to validate problem constraints.
- Solving simple implementation problems efficiently using conditional statements.

---

# ✅ Status

Accepted on CodeChef