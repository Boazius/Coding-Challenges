int solution(vector<int> arr)
{
    // simple solution just try all nums

    int maxCoord = *max_element(arr.begin(), arr.end());
    int currJump{1};

    while (any_of(arr.begin(), arr.end(),
                  [&currJump](int obstacle)
                  { return obstacle % currJump == 0; }))
    {
        currJump++;
    }
    return currJump;
}
