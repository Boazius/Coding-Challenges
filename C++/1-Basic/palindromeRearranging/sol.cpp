#include <string>
#include <unordered_map>

bool solution(std::string inputString) {
    std::unordered_map<char, int> charCount;
    int oddCount = 0;

    // Count the occurrences of each character in the input string
    for (char ch : inputString) {
        charCount[ch]++;
    }

    // Count the number of characters with odd counts
    for (const auto& pair : charCount) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }

    // Check if it's possible to form a palindrome based on character counts
    if (inputString.size() % 2 == 0) {
        // If the string length is even, all character counts should be even
        return oddCount == 0;
    } else {
        // If the string length is odd, there should be exactly one character with an odd count
        return oddCount == 1;
    }
}
