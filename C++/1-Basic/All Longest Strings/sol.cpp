#include <vector>
#include <string>

std::vector<std::string> solution(const std::vector<std::string>& inputArray) {
    int maxStrLen = 0;
    for (const std::string& str : inputArray) {
        maxStrLen = std::max(maxStrLen, static_cast<int>(str.length()));
    }

    std::vector<std::string> longestStrings;
    for (const std::string& str : inputArray) {
        if (str.length() == maxStrLen) {
            longestStrings.push_back(str);
        }
    }
    return longestStrings;
}
    