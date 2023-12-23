**Problem from CodeSignal.com:**

Certainly, here's the task converted to markdown:

---

**Task**

Given an array of integers, remove every kth element from it.

**Example**

For `inputArray = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]` and `k = 3`, the output should be `solution(inputArray, k) = [1, 2, 4, 5, 7, 8, 10]`.

**Input/Output**

- [execution time limit] 0.5 seconds (cpp)

- [memory limit] 1 GB

- **Input**
    - `inputArray`: An array of integers.
        - Guaranteed constraints: 5 ≤ inputArray.length ≤ 15, -20 ≤ inputArray[i] ≤ 20.
    - `k`: An integer.
        - Guaranteed constraints: 1 ≤ k ≤ 10.

- **Output**
    - Return `inputArray` without elements at positions k - 1, 2k - 1, 3k - 1, etc.

---