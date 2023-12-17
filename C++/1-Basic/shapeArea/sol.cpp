int solution(int n) {
    // The formula calculates the area of an n-interesting polygon
    // It's derived from the sum of squares of consecutive odd numbers
    return (n * n + (n - 1) * (n - 1));
}
