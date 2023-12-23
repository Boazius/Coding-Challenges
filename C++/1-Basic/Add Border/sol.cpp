#include <vector>
#include <string>

void addAsterisksInPlace(std::string& input) {
    input = '*' + input + '*';
}

std::vector<std::string> solution(std::vector<std::string> picture) {
    // Add asterisks to each string in the vector
    for (std::string& str : picture) {
        addAsterisksInPlace(str);
    }

    // Create a string of asterisks with the same length as the first string in the vector
    std::string asterisks(picture[0].size(), '*');

    // Add a string of asterisks at the beginning and end of the vector
    picture.insert(picture.begin(), asterisks);
    picture.push_back(asterisks);

    return picture;
}
