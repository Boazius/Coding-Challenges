// Function to determine if the given pseudocode results in an infinite loop
bool solution(int a, int b) {
    // Loop is infinite if 'a' and 'b' have different parities (one is odd, the other is even)
    // or if 'a' is initially greater than 'b'
    return (a % 2 != b % 2) || (a > b);
}