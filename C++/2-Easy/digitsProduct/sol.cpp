int solution(int product) {
    if (product == 0) return 10; // Edge case: product is 0, so the answer is 10
    if (product == 1) return 1;  // Edge case: product is 1, so the answer is 1

    int result = 0;
    int placeValue = 1;

    // Find the largest digits that decompose it
    for (int i = 9; i > 1; --i) {
        while (product % i == 0) { // Try dividing this digit until it cannot be divided
            result += i * placeValue;
            placeValue *= 10;
            product /= i;
        }
    }

    return (product == 1) ? result : -1;
}
