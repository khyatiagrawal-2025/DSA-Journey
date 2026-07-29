# Valley Flattening (VALLFLAT)

## Problem Link
🔗 https://www.codechef.com/START249D/problems/VALLFLAT

---

## Problem Statement

You are given an array `A` of length `N`.

All elements of `A` are distinct.

You can perform the following operation:

Choose an index `i` such that:

```
A[i] < min(A[i-1], A[i+1])
```

Then set:

```
A[i-1] = A[i]
A[i+1] = A[i]
```

You can perform this operation any number of times.

Find the minimum possible sum of the array after performing operations.

---

## Input Format

The first line contains an integer `T`.

For each test case:

- First line contains `N`.
- Second line contains `N` space-separated integers.

---

## Output Format

For each test case, print the minimum possible sum.

---

## Constraints

- `1 ≤ T ≤ 500`
- `3 ≤ N ≤ 2000`
- `1 ≤ A[i] ≤ 2000`
- Sum of `N` over all test cases ≤ `2000`

---

## Example

### Input

```text
3
4
3 2 4 1
5
4 7 8 3 2
5
5 2 8 3 7
```

### Output

```text
7
24
12
```

---

## Approach

1. Find all original valley positions.

A position `i` is a valley if:

```
A[i] < A[i-1] && A[i] < A[i+1]
```

2. A valley value can replace its neighbours.

3. For every position:
   - If it is a valley, keep its value.
   - Otherwise, replace it with the smallest value among its adjacent valleys (if any).

4. Add all final values.

---

## Complexity Analysis

- Time Complexity: `O(N)`
- Space Complexity: `O(N)`

---

## Tags

`CodeChef` `Starters 249` `Greedy` `Implementation` `C`