**Problem from CodeSignal.com**

Let's define digit degree of some positive integer as the number of times we need to replace this number with the sum of its digits until we get to a one-digit number.

Given an integer, find its digit degree.

**Example**

```markdown
For n = 5, the output should be
solution(n) = 0;

For n = 100, the output should be
solution(n) = 1.
1 + 0 + 0 = 1.

For n = 91, the output should be
solution(n) = 2.
9 + 1 = 10 -> 1 + 0 = 1.
```

**Input/Output**

```markdown
[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] integer n

Guaranteed constraints:
5 ≤ n ≤ 109.

[output] integer
```