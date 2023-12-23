#include <regex>
#include <string>

bool solution(std::string s) {
    std::regex pattern("^((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9]?[0-9])\\.){3}(25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9]?[0-9])$");
    return std::regex_match(s, pattern);
}
