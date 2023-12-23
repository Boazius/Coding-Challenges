**Problem from CodeSignal.com:**

In the popular Minesweeper game, you have a board with some mines, and those cells that don't contain a mine have a number in them that indicates the total number of mines in the neighboring cells. Starting with some arrangement of mines, we want to create a Minesweeper game setup.

## Example

For the input matrix:

```
matrix = [[true, false, false],
          [false, true, false],
          [false, false, false]]
```

the output should be:

```
solution(matrix) = [[1, 2, 1],
                    [2, 1, 1],
                    [1, 1, 1]]
```

## Input/Output

- **[execution time limit]** 0.5 seconds (cpp)
- **[memory limit]** 1 GB
- **[input]** array.array.boolean `matrix`

  A non-empty rectangular matrix consisting of boolean values - true if the corresponding cell contains a mine, false otherwise.

  Guaranteed constraints:
  2 ≤ `matrix.length` ≤ 100,
  2 ≤ `matrix[0].length` ≤ 100.

- **[output]** array.array.integer

  A rectangular matrix of the same size as `matrix`, each cell of which contains an integer equal to the number of mines in the neighboring cells. Two cells are called neighboring if they share at least one corner.
