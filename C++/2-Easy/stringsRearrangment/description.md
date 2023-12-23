**Problem from CodeSignal.com:**

## Rearrange Strings

Given an array of equal-length strings, you'd like to know if it's possible to rearrange the order of the elements in such a way that each consecutive pair of strings differ by exactly one character. Return true if it's possible, and false if not.

**Note**: You're only rearranging the order of the strings, not the order of the letters within the strings!

### Example

For `inputArray = ["aba", "bbb", "bab"]`, the output should be `solution(inputArray) = false`.

There are 6 possible arrangements for these strings:

1. ["aba", "bbb", "bab"]
2. ["aba", "bab", "bbb"]
3. ["bbb", "aba", "bab"]
4. ["bbb", "bab", "aba"]
5. ["bab", "bbb", "aba"]
6. ["bab", "aba", "bbb"]

None of these satisfy the condition of consecutive strings differing by 1 character, so the answer is false.

For `inputArray = ["ab", "bb", "aa"]`, the output should be `solution(inputArray) = true`.

It's possible to arrange these strings in a way that each consecutive pair of strings differ by 1 character (e.g., "aa", "ab", "bb" or "bb", "ab", "aa"), so return true.

### Input/Output

- **[execution time limit]** 0.5 seconds (cpp)
- **[memory limit]** 1 GB

**Input:**

- `array.string inputArray`

  A non-empty array of strings of lowercase letters.

  Guaranteed constraints:
  - 2 ≤ inputArray.length ≤ 10,
  - 1 ≤ inputArray[i].length ≤ 15.

**Output:**

- `boolean`

  Return true if the strings can be reordered in such a way that each neighboring pair of strings differ by exactly one character (false otherwise).
