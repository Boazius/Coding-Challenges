#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> a) {
    std::vector<int> heights;

    // Get all heights from the input
    for (int val : a) {
        if (val != -1) {
            heights.push_back(val);
        }
    }

    // Sort the heights
    std::sort(heights.begin(), heights.end());

    // Replace heights in the original vector at positions where a[i] != -1
    auto heightIter = heights.begin();
    for (auto& val : a) {
        if (val != -1) {
            val = *heightIter++;
        }
    }

    return a;
}
