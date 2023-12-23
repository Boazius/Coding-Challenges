#include <string>

bool isPalindrome(const std::string& st) {
    int i = 0;
    int j = st.length() - 1;

    while (i < j) {
        if (st[i] != st[j])
            return false;
        i++;
        j--;
    }
    return true;
}

std::string solution(const std::string& st) {
    if (isPalindrome(st))
        return st;

    std::string toAppend;
    std::string currString = st;
    int i = 0;

    while (!isPalindrome(currString)) {
        currString = st + toAppend;
        toAppend = st[i] + toAppend;
        i++;
    }
    return currString;
}
