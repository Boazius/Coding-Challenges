#include <vector>
#include <string>

constexpr int ENG_CHARS_LOWERCASE_COUNT = 26;

std::vector<int> getCountCharsForString(const std::string& s) {
    std::vector<int> countChars(ENG_CHARS_LOWERCASE_COUNT, 0);
    for (char c : s) {
        countChars[c - 'a']++;
    }
    return countChars;
}

int solution(const std::string& s1, const std::string& s2) {
    std::vector<int> countCharsS1 = getCountCharsForString(s1);
    std::vector<int> countCharsS2 = getCountCharsForString(s2);
    int retSum = 0;

    for (int i = 0; i < ENG_CHARS_LOWERCASE_COUNT; i++) {
        retSum += std::min(countCharsS1[i], countCharsS2[i]);
    }

    return retSum;
}
