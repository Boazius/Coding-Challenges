#include <string>
#include <vector>

std::string solution(const std::string& s) {
    std::string encodedString;
    size_t length = s.length();

    for (size_t i = 0; i < length; ++i) {
        char currentChar = s[i];
        size_t count = 1;

        while (i + 1 < length && s[i] == s[i + 1]) {
            count++;
            i++;
        }

        if (count > 1) {
            encodedString += std::to_string(count);
        }

        encodedString += currentChar;
    }

    return encodedString;
}
