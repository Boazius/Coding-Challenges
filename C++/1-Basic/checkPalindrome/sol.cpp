bool solution(string inputString) {
    int length = inputString.length();
    for (int i = 0; i < length / 2; ++i) {
        if (inputString[i] != inputString[length - 1 - i]) {
            return false;
        }
    }
    return true;
}
