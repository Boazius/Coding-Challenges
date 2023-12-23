**Problem from CodeSignal.com:**

**Problem Statement**

Given an array of integers, find the maximal possible sum of some of its k consecutive elements.

**Example**

For `inputArray = [2, 3, 5, 1, 6]` and `k = 2`, the output should be `solution(inputArray, k) = 8`.

All possible sums of 2 consecutive elements are:

1. 2 + 3 = 5
2. 3 + 5 = 8
3. 5 + 1 = 6
4. 1 + 6 = 7

Thus, the answer is 8.

**Input/Output**

- `[execution time limit]` 0.5 seconds (cpp)
- `[memory limit]` 1 GB

**Input**
- `inputArray`: Array of positive integers.

    Guaranteed constraints:
    - 3 ≤ `inputArray.length` ≤ 105
    - 1 ≤ `inputArray[i]` ≤ 1000

- `k`: An integer (not greater than the length of `inputArray`).

    Guaranteed constraints:
    - 1 ≤ `k` ≤ `inputArray.length`

**Output**
- The maximal possible sum.

---