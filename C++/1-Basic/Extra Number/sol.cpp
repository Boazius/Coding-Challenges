// Function to find the unique number among a, b, and c
int solution(int a, int b, int c) {
    // If a is equal to b, then c is the unique number
    if (a == b) return c;

    // If a is equal to c, then b is the unique number
    if (a == c) return b;

    // If neither of the above conditions is true, a is the unique number
    return a;
}
