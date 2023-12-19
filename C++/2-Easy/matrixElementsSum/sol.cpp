#include <vector>

int solution(std::vector<std::vector<int>>& mat) {
    int retSum = 0;
    std::vector<bool> bannedFloors(mat[0].size(), false);

    for (const auto& floor : mat) {
        for (size_t j = 0; j < floor.size(); ++j) {
            if (floor[j] == 0) {
                bannedFloors[j] = true;
            }
            if (!bannedFloors[j]) {
                retSum += floor[j];
            }
        }
    }
    return retSum;
}
