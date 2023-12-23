string solution(string inputString) {
    for (char &ch : inputString) {
        if (ch == 'z')
            ch = 'a';
        else
            ch++;
    }
    return inputString;
}
