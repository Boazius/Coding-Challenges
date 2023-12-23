vector<vector<int>> solution(vector<vector<int>> image)
{

    int rows = image.size() - 2;
    int cols = image[0].size() - 2;
    vector<vector<int>> blurred(rows, vector<int>(cols, 0));

    for (int i = 1; i <= rows; ++i)
    { //  for every row
        for (int j = 1; j <= cols; ++j)
        {                  // for every col
            int total = 0; // get sum from surrounding
            for (int k = i - 1; k <= i + 1; ++k)
            {
                for (int l = j - 1; l <= j + 1; ++l)
                {
                    total += image[k][l];
                }
            }
            // add avg to the output
            blurred[i - 1][j - 1] = total / 9;
        }
    }

    return blurred;
}
