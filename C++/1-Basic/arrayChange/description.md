**Problem from CodeSignal.com:**

You are given an array of integers. On each move, you are allowed to increase exactly one of its elements by one. Find the minimal number of moves required to obtain a strictly increasing sequence from the input.

## Example

For `inputArray = [1, 1, 1]`, the output should be `solution(inputArray) = 3`.

## Input/Output

- **[execution time limit]** 0.5 seconds (cpp)
- **[memory limit]** 1 GB
- **[input]** array.integer `inputArray`

  Guaranteed constraints:
  3 ≤ `inputArray.length` ≤ 105,
  -105 ≤ `inputArray[i]` ≤ 105.

- **[output]** integer

  The minimal number of moves needed to obtain a strictly increasing sequence from `inputArray`.
  It's guaranteed that for the given test cases, the answer always fits the signed 32-bit integer type.
