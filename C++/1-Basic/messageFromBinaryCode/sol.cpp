#include <bitset>

std::string solution(std::string binaryInput) {
    std::string result;
    
    for (size_t i = 0; i < binaryInput.length(); i += 8) {
        std::string subString = binaryInput.substr(i, 8);
        
        // Convert binary string to character and append to result
        result += static_cast<char>(std::bitset<8>(subString).to_ulong());
    }
    
    return result;
}
