#include <vector>

bool solution(std::vector<int> seq) {
    bool skippedAnElement = false;
    int prevValue = seq[0];
    
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] <= prevValue) {
            if (skippedAnElement) return false;
            skippedAnElement = true;

            if (i < 2 || seq[i] > seq[i - 2]) {
                prevValue = seq[i];
            }
        } else {
            prevValue = seq[i];
        }
    }
    return true;
}
