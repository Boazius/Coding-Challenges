#include <iostream>

// Function to calculate the longest call duration
int solution(int min1, int min2_10, int min11, int s) {
    int duration = 0;

    // First minute
    if (s >= min1) {
        s -= min1;
        duration = 1;
    } else {
        return 0; // Not enough balance even for the first minute
    }

    // Next 9 minutes (2nd to 10th)
    for (int i = 2; i <= 10; ++i) {
        if (s >= min2_10) {
            s -= min2_10;
            duration++;
        } else {
            return duration; // Return duration if balance is insufficient
        }
    }

    // Minutes after the 10th
    while (s >= min11) {
        s -= min11;
        duration++;
    }

    return duration;
}