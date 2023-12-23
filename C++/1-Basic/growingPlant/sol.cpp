// Function to calculate the number of days it takes for a plant to reach or pass a desired height
int solution(int upSpeed, int downSpeed, int desiredHeight) 
{
    int currHeight = 0;  // Initialize the current height of the plant
    int days = 0;       // Initialize the number of days

    // Continue looping until the current height reaches or passes the desired height
    while (currHeight < desiredHeight)
    {
        days++;               // Increment the day count
        currHeight += upSpeed; // Increase the height during the day
        
        // Check if the plant has reached or passed the desired height
        if (currHeight >= desiredHeight)
            return days;

        currHeight -= downSpeed; // Decrease the height during the night
    }
    
    // Return the total number of days
    return days;
}
