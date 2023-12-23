vector<vector<int>> solution(int n) {
    vector<vector<int>> result(n, vector<int>(n));

    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; ++i) {
            result[top][i] = num++;
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; ++i) {
            result[i][right] = num++;
        }
        right--;

        // Traverse from right to left
        for (int i = right; i >= left; --i) {
            result[bottom][i] = num++;
        }
        bottom--;

        // Traverse from bottom to top
        for (int i = bottom; i >= top; --i) {
            result[i][left] = num++;
        }
        left++;
    }

    return result;
}
