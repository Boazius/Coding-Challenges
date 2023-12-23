**Problem from CodeSignal.com:**

Check if the given string is a correct variable name.

## Example

For `name = "var_1__Int"`, the output should be:

```
solution(name) = true
```

For `name = "qq-q"`, the output should be:

```
solution(name) = false
```

For `name = "2w2"`, the output should be:

```
solution(name) = false
```

## Input/Output

- **[execution time limit]** 0.5 seconds (cpp)
- **[memory limit]** 1 GB
- **[input]** string `name`

  Guaranteed constraints:
  1 ≤ `name.length` ≤ 10.

- **[output]** boolean

  `true` if `name` is a correct variable name, `false` otherwise.