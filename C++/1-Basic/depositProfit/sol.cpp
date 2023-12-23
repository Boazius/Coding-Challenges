int solution(int deposit, int rate, int threshold) {
    // Convert rate to a decimal percentage (e.g., 20% to 0.20)
    double gRate = rate / 100.0;
    
    int timeTo = 0; // Initialize the number of years to zero
    double currDeposit = static_cast<double>(deposit); // Convert initial deposit to double
    
    while (currDeposit < threshold) {
        // Calculate the balance at the end of each year
        currDeposit = currDeposit + currDeposit * gRate;
        timeTo++; // Increment the year count
    }
    
    return timeTo; // Return the number of years it took to reach the threshold
}
