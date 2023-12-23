bool solution(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false; // Check if the arrays have the same length
    }

    bool isEqual = true;
    bool isAlreadySwitched = false;
    int diffIndexA = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) { // Found inequality
            if (isAlreadySwitched) {
                return false; // If already switched once, return false
            }

            if (isEqual) { // First inequality
                isEqual = false;
                diffIndexA = i;
            } else { // Second inequality, try to switch
                swap(a[i], a[diffIndexA]);
                isAlreadySwitched = true;
                break;
            }
        }
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false; // Check if the arrays are equal now, return false if not
        }
    }

    return true;
}
