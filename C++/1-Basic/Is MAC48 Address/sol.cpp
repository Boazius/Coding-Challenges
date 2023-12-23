#include <string>
#include <regex>

bool isHexadecimal(char ch) {
    return (isdigit(ch) || (ch >= 'A' && ch <= 'F'));
}

bool solution(string input) {
    // Regular expression pattern for MAC-48 address 00-1B-63-84-45-E6
    std::regex pattern("^([0-9A-F]{2}-){5}[0-9A-F]{2}$");

    return std::regex_match(input, pattern);
}
