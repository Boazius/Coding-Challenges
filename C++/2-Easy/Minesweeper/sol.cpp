vector<vector<int>> solution(vector<vector<bool>> matrix)
{

    // same algorithm
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> result(rows, vector<int>(cols, 0));

    int dirX[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dirY[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; ++j)
        {

            // count mines for each non mine cell
            for (int k = 0; k < 8; ++k)
            {
                int newRow = i + dirX[k];
                int newCol = j + dirY[k];
                if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols && matrix[newRow][newCol])
                {
                    result[i][j]++;
                }
            }
        }
    }
    return result;
}
