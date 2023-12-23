#include <string> 

int solution(int n) {
    int dd = 0; // Initialize digit degree to 0

    while (n / 10 != 0) {
        std::string str = std::to_string(n); // Convert the integer to a string
        int newNum = 0; // Initialize a variable to store the sum of digits

        // Iterate through each character in the string
        for (char ch : str) {
            newNum += (ch - '0'); // Convert character to integer and add to newNum
        }

        n = newNum; // Update n with the sum of digits
        dd++; // Increment the digit degree
    }

    return dd; // Return the digit degree
}
