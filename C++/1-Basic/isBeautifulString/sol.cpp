#include <vector>
#include <string>
#include <algorithm>

bool solution(string inputString) {
    vector<int> counts(26, 0);

    for (char ch : inputString) {
        counts[ch - 'a']++;
    }

    reverse(counts.begin(), counts.end());

    return is_sorted(counts.begin(), counts.end());
}
