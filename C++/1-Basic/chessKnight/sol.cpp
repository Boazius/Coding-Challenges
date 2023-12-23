int solution(string cell) {
    vector<int> row = {2, 1, -1, -2, -2, -1, 1, 2};
    vector<int> col = {1, 2, 2, 1, -1, -2, -2, -1};

    int currRow = cell[1] - '1';
    int currCol = cell[0] - 'a';
    
    int countMoves = 0;
    
    for (int i = 0; i < row.size(); i++) {
        int newRow = currRow + row[i];
        int newCol = currCol + col[i];
        
        if (newRow >= 0 && newRow <= 7 && newCol >= 0 && newCol <= 7) {
            countMoves++;
        }
    }
    
    return countMoves;
}
