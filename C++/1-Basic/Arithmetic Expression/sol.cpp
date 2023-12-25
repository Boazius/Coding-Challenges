// Function to check if a correct arithmetic expression can be formed
bool solution(int a, int b, int c) {
    // Check each arithmetic operation
    if (a + b == c) return true;  // Check addition
    if (a - b == c) return true;  // Check subtraction
    if (a * b == c) return true;  // Check multiplication
    // Check division (considering integer division, and avoiding division by zero)
    if (b != 0 && a / b == c && a % b == 0) return true;

    // If none of the operations work, return false
    return false;
}