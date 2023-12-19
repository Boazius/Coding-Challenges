#include <cmath>

bool solution(int n) {
    int length = static_cast<int>(log10(abs(n))) + 1;
    if (length % 2 != 0) {
        return false;
    }

    int firstSum = 0, secondSum = 0;
    for (int i = 0; i < length; ++i) {
        if (i < length / 2) {
            firstSum += n % 10;
        } else {
            secondSum += n % 10;
        }
        n /= 10;
    }
    
    return (firstSum == secondSum);
}
