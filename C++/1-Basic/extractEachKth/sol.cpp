vector<int> solution(vector<int> arr, int k) {
    int index = k - 1; // Adjust index to start from 0-based indexing

    while (index < arr.size()) {
        arr.erase(arr.begin() + index); // Remove the kth element
        index += k - 1; // Increment by k - 1 to adjust for the removed element
    }

    return arr;
}
