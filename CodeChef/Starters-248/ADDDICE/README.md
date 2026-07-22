# Adding Dice

> Platform: CodeChef

> Contest: Starters 248

> Difficulty: Beginner

---

## Problem Link

https://www.codechef.com/START248D/problems/ADDDICE

---

# Problem Summary

You are given the result of the first die.

Determine whether the second die can be rolled so that the sum of both dice becomes exactly **9**.

Print **Yes** if possible, otherwise print **No**.

---

# Input Format

A single integer:

- X — value shown on the first die.

---

# Output Format

Print

- Yes
- No

---

# Constraints

```
1 ≤ X ≤ 6
```

---

# Approach

The second die must contain

```
9 - X
```

A valid die can only contain numbers from **1 to 6**.

Therefore,

```
1 ≤ (9-X) ≤ 6
```

If true

```
Yes
```

otherwise

```
No
```

---

# Complexity

Time

```
O(1)
```

Space

```
O(1)
```

---

# Sample

Input

```text
3
```

Output

```text
Yes
```

Explanation

```
3 + 6 = 9
```

---

# Solution Language

C

---

# Status

✅ Accepted