int solution(int year) {
    // The formula calculates the century by dividing (year - 1) by 100 and adding 1
    return (year - 1) / 100 + 1;
}
