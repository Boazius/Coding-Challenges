// Function to check if two strings differ by exactly one character
bool isDifferByOne(string s1, string s2) {
    int diffCount = 0;
    int len = s1.length();
    
    for (int i = 0; i < len; i++) {
        if (s1[i] != s2[i]) {
            diffCount++;
            if (diffCount > 1) {
                return false; // More than one difference found, not valid
            }
        }
    }
    return diffCount == 1; // Valid if exactly one difference found
}

// Main function to rearrange and check strings
bool solution(vector<string> strings) {
    // Sort the strings to start with a lexicographically minimal permutation
    std::sort(strings.begin(), strings.end());

    do {
        // Check if the sorted permutation satisfies the condition
        bool satisfiesCondition = true;
        for (int i = 1; i < strings.size(); i++) {
            if (!isDifferByOne(strings[i - 1], strings[i])) {
                satisfiesCondition = false;
                break;
            }
        }
        if (satisfiesCondition) {
            return true; // All strings in this permutation differ by one character
        }
    } while (std::next_permutation(strings.begin(), strings.end()));

    return false; // No permutation satisfied the condition
}
