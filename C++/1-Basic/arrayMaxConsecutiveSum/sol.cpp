int solution(vector<int> arr, int k) {
    int maxSum = 0;     // Initialize the maximum sum to 0
    int currSum = 0;    // Initialize the current sum to 0

    // Calculate the sum of the first 'k' consecutive elements
    for (int i = 0; i < k; i++) {
        currSum += arr[i];
    }
    
    maxSum = currSum;    // Initialize maxSum with the initial sum
    
    for (int i = k; i < arr.size(); i++) {
        // Subtract the element which is no longer part of the 'k' consecutive elements
        // and add the new element at position 'i'
        currSum = currSum - arr[i - k] + arr[i];
        
        // Update maxSum if the current sum is greater
        maxSum = max(maxSum, currSum);
    }
    
    return maxSum;   // Return the maximal possible sum
}
