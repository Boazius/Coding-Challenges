vector<int> solution(vector<int> inputArray, int elemToReplace, int substitutionElem) {

    for(int& val: inputArray)
    {
        if(val == elemToReplace)
            val = substitutionElem;
    }
    return inputArray;
}
