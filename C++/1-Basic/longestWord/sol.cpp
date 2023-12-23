#include <string>
#include <cctype>

std::string solution(std::string text) {
    int maxWordLen = 0;
    std::string maxWord = "";
    
    int currWordLen = 0;
    std::string currWord = "";

    for (char c : text) {
        if (std::isalpha(c)) {
            currWordLen++;
            currWord += c;

            if (currWordLen > maxWordLen) {
                maxWordLen = currWordLen;
                maxWord = currWord;
            }
        } else {
            currWord = "";
            currWordLen = 0;
        }
    }

    return maxWord;
}
