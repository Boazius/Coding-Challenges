int solution(int n) {
    int maxNum = 0;
    string str = to_string(n);
    
    for (int i = 0; i < str.length(); i++) {
        string newStr = str;
        newStr.erase(newStr.begin() + i);
        int newNum = stoi(newStr);
        maxNum = max(newNum, maxNum);
    }
    
    return maxNum;
}
