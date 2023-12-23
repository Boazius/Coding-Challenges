bool isSubgridValid(const std::vector<std::vector<int>> &grid, int startRow, int startCol)
{
    std::vector<bool> seen(10, false); // Use a vector instead of unordered_set

    for (int i = startRow; i < startRow + 3; ++i)
    {
        for (int j = startCol; j < startCol + 3; ++j)
        {
            int num = grid[i][j];
            if (num < 1 || num > 9 || seen[num])
            {
                return false;
            }
            seen[num] = true;
        }
    }
    return true;
}

bool solution(const std::vector<std::vector<int>> &grid)
{
    // for every row
    for (int i = 0; i < 9; ++i)
    {
        std::vector<bool> seenRow(10, false); // Use a vector instead of unordered_set
        std::vector<bool> seenCol(10, false); // Use a vector instead of unordered_set
        for (int j = 0; j < 9; ++j)
        {
            int numRow = grid[i][j];
            int numCol = grid[j][i];

            // Check for duplicates in rows
            if (numRow < 1 || numRow > 9 || seenRow[numRow])
            {
                return false;
            }
            seenRow[numRow] = true;

            // Check for duplicates in columns
            if (numCol < 1 || numCol > 9 || seenCol[numCol])
            {
                return false;
            }
            seenCol[numCol] = true;
        }
    }

    // Check each 3x3 subgrid
    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3)
        {
            if (!isSubgridValid(grid, i, j))
            {
                return false;
            }
        }
    }
    return true;
}
