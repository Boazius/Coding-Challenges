#include <vector>

std::vector<int> solution(const std::vector<int>& a) {
    int sum1 = 0, sum2 = 0;

    // Iterate through the array
    for (int i = 0; i < a.size(); i++) {
        // Use conditional (ternary) operator for simplicity
        (i % 2 != 0) ? sum1 += a[i] : sum2 += a[i];
    }

    // Return the result as a vector
    return {sum2, sum1};
}
