#include <vector>
#include <unordered_map>
#include <string>

std::vector<std::string> solution(std::vector<std::string> names) {
    std::unordered_map<std::string, int> counts;

    for (std::string &fileName : names) {
        if (counts.find(fileName) != counts.end()) {
            int count = counts[fileName];
            std::string newName;
            do {
                count++;
                newName = fileName + "(" + std::to_string(count) + ")";
            } while (counts.find(newName) != counts.end());

            counts[newName] = 0;
            counts[fileName] = count;
            fileName = newName;
        } else {
            counts[fileName] = 0;
        }
    }
    return names;
}
