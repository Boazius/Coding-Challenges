

Given an integer `n` and a number `firstNumber`, you are tasked with finding the number that is written in the radially opposite position to `firstNumber` in a circle of integers from 0 to `n - 1`. The integers are arranged in such a way that the distance between any two neighboring numbers is equal, and 0 and `n - 1` are also considered neighboring.

**Example**

For `n = 10` and `firstNumber = 2`, the output should be `solution(n, firstNumber) = 7`.

**Input**
- `n` (4 ≤ n ≤ 20): A positive even integer.
- `firstNumber` (0 ≤ firstNumber ≤ n - 1): An integer representing the starting position.

**Output**
- An integer representing the number written in the radially opposite position to `firstNumber`.
