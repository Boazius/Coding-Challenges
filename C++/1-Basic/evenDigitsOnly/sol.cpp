bool solution(int n) {
    // Convert the integer to a string for easier digit access
    string str = to_string(n);

    // Iterate through each character in the string
    for (char ch : str) {
        // Check if the character is not an even digit
        if (ch != '0' && ch != '2' && ch != '4' && ch != '6' && ch != '8') {
            // If an odd digit is found, return false immediately
            return false;
        }
    }

    // If all characters are even digits, return true
    return true;
}
