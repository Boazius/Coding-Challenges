Here's an optimized solution to check if the given grid of numbers represents a correct solution to Sudoku:

```cpp
bool isValidSudoku(vector<vector<int>>& board) {
    vector<vector<bool>> rowSeen(9, vector<bool>(9, false));
    vector<vector<bool>> colSeen(9, vector<bool>(9, false));
    vector<vector<bool>> boxSeen(9, vector<bool>(9, false));
    
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (board[i][j] == 0) continue;
            
            int num = board[i][j] - 1;
            int boxIdx = (i / 3) * 3 + j / 3;
            
            if (rowSeen[i][num] || colSeen[j][num] || boxSeen[boxIdx][num]) {
                return false;
            }
            
            rowSeen[i][num] = colSeen[j][num] = boxSeen[boxIdx][num] = true;
        }
    }
    
    return true;
}
```

This code uses three 2D boolean arrays to keep track of the numbers seen in rows, columns, and 3x3 boxes. It iterates through the Sudoku board and checks if any number has already been seen in the corresponding row, column, or box. If it finds a duplicate, it returns false. Otherwise, it continues checking the rest of the board. If no duplicates are found, it returns true, indicating that the given grid represents a correct solution to Sudoku.