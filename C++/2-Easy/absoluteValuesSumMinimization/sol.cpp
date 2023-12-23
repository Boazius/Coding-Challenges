int solution(vector<int> a)
{
    int n = a.size();

    // Calculate the median index
    int median_index = n / 2;

    // Check if the array length is even
    bool isEvenLength = (n % 2 == 0);

    int closestElement = INT_MAX;
    int minSum = INT_MAX;

    // Iterate over the elements around the median
    for (int i = (isEvenLength ? median_index - 1 : median_index); i <= median_index; ++i)
    {
        int sum = 0;

        // Calculate the sum of absolute differences for the current element
        for (int j = 0; j < n; ++j)
        {
            sum += abs(a[j] - a[i]);
        }

        // Update the closest element if the sum is smaller
        if (sum < minSum || (sum == minSum && a[i] < closestElement))
        {
            minSum = sum;
            closestElement = a[i];
        }
    }

    return closestElement;
}
