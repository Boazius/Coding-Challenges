// Function to check if the player reaches the next level
bool solution(int experience, int threshold, int reward) {
    return (experience + reward) >= threshold;
}