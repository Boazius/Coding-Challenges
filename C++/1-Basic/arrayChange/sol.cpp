int solution(vector<int> inputArray) {
    int moves = 0;

    for (int i = 1; i < inputArray.size(); ++i) {
        if (inputArray[i] <= inputArray[i - 1]) {
            // Calculate the number of moves needed to make the current element greater
            // than or equal to the previous element + 1, and add it to the total moves.
            moves += inputArray[i - 1] - inputArray[i] + 1;

            // Update the current element to be one greater than the previous element.
            inputArray[i] = inputArray[i - 1] + 1;
        }
    }

    return moves;
}
