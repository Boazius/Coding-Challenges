#include <string>

int solution(std::string inputString) {
    std::string currentNumber;
    int sum = 0;

    for (char c : inputString) {
        if (std::isdigit(c)) {
            currentNumber += c;
        } else {
            if (!currentNumber.empty()) {
                sum += std::stoi(currentNumber);
                currentNumber.clear();
            }
        }
    }
    
    if (!currentNumber.empty()) {
        sum += std::stoi(currentNumber);
    }
    
    return sum;
}
