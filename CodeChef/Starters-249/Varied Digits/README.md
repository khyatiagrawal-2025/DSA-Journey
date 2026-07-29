# Varied Digits (VARDIGS)

## Problem Link
🔗 https://www.codechef.com/START249D/problems/VARDIGS

## Problem Statement

A **2-digit integer** is called **varied** if it contains two different digits.

You are given a 2-digit integer `X`. Determine whether `X` is varied or not.

- Print **"Yes"** if the two digits are different.
- Print **"No"** otherwise.

---

## Input Format

- A single 2-digit integer `X`.

---

## Output Format

- Print **Yes** if the digits are different.
- Print **No** if both digits are the same.

---

## Constraints

- `10 ≤ X ≤ 99`

---

## Examples

### Example 1

**Input**
```text
22
```

**Output**
```text
No
```

### Example 2

**Input**
```text
48
```

**Output**
```text
Yes
```

---

## Approach

1. Read the input number `X`.
2. Extract the tens digit using `X / 10`.
3. Extract the units digit using `X % 10`.
4. Compare both digits.
5. If the digits are different, print **Yes**; otherwise print **No**.

---

## Solution

**Language:** C

```c
#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int tens = X / 10;
    int units = X % 10;

    if (tens != units)
        printf("Yes");
    else
        printf("No");

    return 0;
}
```

---

## Complexity Analysis

- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

---

## Tags

`CodeChef` `Starters 249` `Implementation` `Math` `Beginner` `C`