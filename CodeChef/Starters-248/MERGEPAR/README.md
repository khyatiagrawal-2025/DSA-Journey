# Merging Parity

> **Platform:** CodeChef  
> **Contest:** Starters 248  
> **Problem Code:** MERGEPAR  
> **Difficulty:** Hard

---

# 🔗 Problem Link

https://www.codechef.com/START248D/problems/MERGEPAR

---

# 📝 Problem Summary

You are given an array **A** consisting of **N** positive integers.

You may repeatedly perform the following operation:

- Choose two **adjacent elements** having the **same parity** (both even or both odd).
- Merge them by adding the second element into the first.
- Remove the second element from the array.

The process may be repeated any number of times.

Your task is to determine the **number of distinct arrays** that can be obtained after performing zero or more valid operations.

Since the answer may be very large, print it modulo **998244353**.

---

# 📥 Input Format

- The first line contains an integer `T`, the number of test cases.
- For each test case:
  - The first line contains an integer `N`.
  - The second line contains `N` integers representing the array.

---

# 📤 Output Format

For each test case, print the number of different arrays that can be obtained after performing the allowed operations.

---

# 📌 Constraints

| Constraint | Value |
|------------|-------|
| 1 ≤ T ≤ 10⁴ |
| 2 ≤ N ≤ 2 × 10⁵ |
| 1 ≤ Ai ≤ 10⁹ |
| Sum of N over all test cases ≤ 2 × 10⁵ |

---

# 💡 Key Observation

Only the **parity** of each element matters.

Each element can be represented as:

- **0 → Even**
- **1 → Odd**

A merge is possible only when two adjacent elements have the same parity.

After merging:

- Even + Even = Even
- Odd + Odd = Even

Therefore, the parity pattern changes dynamically after every merge.

Instead of simulating all possible operations, we count the number of valid states using **Dynamic Programming**.

---

# 🚀 Approach

### Step 1

Convert every array element into its parity.

```text
Even → 0
Odd  → 1
```

---

### Step 2

Define

```text
dp[i]
```

as the number of distinct arrays that can be formed considering the first `i` elements.

---

### Step 3

Traverse the parity array from left to right.

Maintain information about:

- Current consecutive odd segment
- Prefix DP values
- Running contributions from previous states

Depending on whether the current element is **odd** or **even**, update the DP state using the corresponding transition.

---

### Step 4

All computations are performed modulo

```text
998244353
```

Finally,

```text
dp[N]
```

is the required answer.

---

# ✅ Why This Works

The merge operation depends only on the **parity** of adjacent elements.

Instead of generating every possible array explicitly, Dynamic Programming counts every reachable state exactly once.

This reduces an exponential search into a linear-time solution.

---

# ⏱ Complexity

### Time Complexity

```text
O(N)
```

Each element is processed exactly once.

---

### Space Complexity

```text
O(N)
```

The DP array stores intermediate results.

---

# 📌 Sample Input

```text
4
3
1 1 2
3
2 4 6
4
1 2 3 4
8
5 3 2 6 8 5 5 101
```

---

# 📌 Sample Output

```text
3
4
1
48
```

---

# 📖 Explanation

### Test Case 1

Initial array

```text
[1,1,2]
```

Possible arrays are

```text
[1,1,2]
[2,2]
[4]
```

Hence,

```text
Answer = 3
```

---

### Test Case 2

Array

```text
[2,4,6]
```

Since every adjacent pair has the same parity, multiple merge sequences are possible.

The total number of distinct reachable arrays is

```text
4
```

---

### Test Case 3

Array

```text
[1,2,3,4]
```

No adjacent elements share the same parity.

Therefore,

```text
Only one array is possible.
```

---

# 🛠 Solution

```c
#include <stdio.h>

#define MOD 998244353LL
#define MAXN 200005

long long dp[MAXN];
int p[MAXN];

int main(){
    int T;
    scanf("%d",&T);

    while(T--){

        int N;
        scanf("%d",&N);

        for(int i=1;i<=N;i++){
            long long x;
            scanf("%lld",&x);
            p[i]=(int)(x&1LL);
        }

        dp[0]=1;

        int inRun=0;
        long long base=0,sumEven=0,sumOdd=0;
        int s=0,rl=0;

        for(int R=1;R<=N;R++){

            if(p[R]){

                if(!inRun){

                    inRun=1;
                    s=R;
                    rl=1;

                    if(s==1)
                        base=dp[0];
                    else
                        base=(2*dp[s-1])%MOD;

                    sumEven=0;
                    sumOdd=0;

                    dp[R]=dp[R-1];

                }else{

                    rl++;

                    long long firstterm=(rl%2==0)?base:0;
                    long long inRunSum=(R%2==0)?sumOdd:sumEven;

                    long long S=(firstterm+inRunSum)%MOD;

                    dp[R]=(dp[R-1]+S)%MOD;

                    if(R%2==0)
                        sumEven=(sumEven+dp[R-1])%MOD;
                    else
                        sumOdd=(sumOdd+dp[R-1])%MOD;
                }

            }else{

                inRun=0;

                long long Tv;

                if(R-1==0)
                    Tv=0;
                else if(p[R-1]==0)
                    Tv=dp[R-1];
                else
                    Tv=((dp[R-1]-dp[R-2])%MOD+MOD)%MOD;

                dp[R]=(dp[R-1]+Tv)%MOD;
            }
        }

        printf("%lld\n",dp[N]);
    }

    return 0;
}
```

---

# 🎯 What I Learned

- Reducing a problem using parity instead of actual values.
- Identifying state transitions using Dynamic Programming.
- Counting reachable configurations without explicit simulation.
- Handling modular arithmetic efficiently.
- Solving linear DP problems with optimized state updates.

---

# 🧠 Key Insight

The actual values of the numbers are **irrelevant**.

Only whether a number is **even** or **odd** determines whether two adjacent elements can be merged.

By modeling the problem using parity and Dynamic Programming, we can count all reachable arrays efficiently in **O(N)** time.

---

# ✅ Status

Accepted on CodeChef