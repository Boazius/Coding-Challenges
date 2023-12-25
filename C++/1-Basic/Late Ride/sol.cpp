// Function to calculate the sum of digits of the current time
int solution(int n) {
    int hours = n / 60;     // Total hours
    int minutes = n % 60;   // Total minutes after the last hour

    // Summing up all the digits in the hours and minutes
    return (hours / 10) + (hours % 10) + (minutes / 10) + (minutes % 10);
}