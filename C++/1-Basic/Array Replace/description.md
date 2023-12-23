**Problem from CodeSignal.com:**

Given an array of integers, replace all the occurrences of `elemToReplace` with `substitutionElem`.

## Example

For the input:

```
inputArray = [1, 2, 1],
elemToReplace = 1,
substitutionElem = 3
```

the output should be:

```
solution(inputArray, elemToReplace, substitutionElem) = [3, 2, 3]
```

## Input/Output

- **[execution time limit]** 0.5 seconds (cpp)
- **[memory limit]** 1 GB
- **[input]** array.integer `inputArray`

  Guaranteed constraints:
  0 ≤ `inputArray.length` ≤ 10^4,
  0 ≤ `inputArray[i]` ≤ 10^9.

- **[input]** integer `elemToReplace`

  Guaranteed constraints:
  0 ≤ `elemToReplace` ≤ 10^9.

- **[input]** integer `substitutionElem`

  Guaranteed constraints:
  0 ≤ `substitutionElem` ≤ 10^9.

- **[output]** array.integer