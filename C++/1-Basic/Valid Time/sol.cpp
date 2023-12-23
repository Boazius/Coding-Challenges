#include <string>
#include <regex>

bool solution(std::string time) {
    std::regex timeRegex("^([0-1][0-9]|[2][0-3]):([0-5][0-9])$");
    return std::regex_match(time, timeRegex);
}
