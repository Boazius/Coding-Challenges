#include <vector>
#include <algorithm>

int solution(std::vector<int> votes, int k) {
    // Sort votes in descending order
    std::sort(votes.begin(), votes.end(), std::greater<int>());

    // Get the maximum vote count
    int maxVote = votes[0];

    // Count how many candidates have the maximum votes
    int howManyMax = std::count(votes.begin(), votes.end(), maxVote);

    // If k is zero, return 1 if there's only one candidate with max votes, else return 0
    if (k == 0) {
        return (howManyMax == 1) ? 1 : 0;
    }

    // Count the candidates who can win with additional k votes
    int count = 0;
    for (auto vote : votes) {
        if (vote + k > maxVote) {
            count++;
        }
    }

    return count;
}
