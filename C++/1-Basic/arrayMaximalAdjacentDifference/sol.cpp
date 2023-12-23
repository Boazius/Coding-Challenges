int solution(vector<int> inputArray) {
    int maxDiff{0};
    
    for(int i{1}; i<inputArray.size(); ++i)
    {
        maxDiff= max(abs(inputArray[i]-inputArray[i-1]),maxDiff);
    }
    return maxDiff;

}
