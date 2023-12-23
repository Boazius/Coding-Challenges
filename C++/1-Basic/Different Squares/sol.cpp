#include <vector>
#include <set>

int solution(std::vector<std::vector<int>> matrix) {
    std::set<std::string> mySet;
    
    for (size_t i = 0; i < matrix.size() - 1; i++) {
        for (size_t j = 0; j < matrix[0].size() - 1; j++) {
            std::string curr = std::to_string(matrix[i][j]) +
                               std::to_string(matrix[i][j + 1]) +
                               std::to_string(matrix[i + 1][j]) +
                               std::to_string(matrix[i + 1][j + 1]);
            mySet.insert(curr);
        }
    }

    return mySet.size();
}
