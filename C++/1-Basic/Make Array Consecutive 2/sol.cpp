int solution(vector<int> statues) {
    int minStatueSize = INT_MAX;
    int maxStatueSize = INT_MIN;

    for (int statue : statues) {
        minStatueSize = min(minStatueSize, statue);
        maxStatueSize = max(maxStatueSize, statue);
    }

    return (maxStatueSize - minStatueSize + 1) - statues.size();
}
