bool solution(string name) {
    // Define a regular expression pattern for valid variable names
    regex pattern("[a-zA-Z_][a-zA-Z0-9_]*");
    
    // Use regex_match to check if the name matches the pattern
    return regex_match(name, pattern);
}
