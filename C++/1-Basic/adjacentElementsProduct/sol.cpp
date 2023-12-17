int solution(vector<int> inputArray) {
    int maxProduct = inputArray[0] * inputArray[1];
    for (int i = 1; i < inputArray.size() - 1; ++i) {
        maxProduct = max(maxProduct, inputArray[i] * inputArray[i + 1]);
    }
    return maxProduct;
}
