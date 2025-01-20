#pragma once

#include <string>

// project dependencies
#include "dependencies/json.hpp"

class matchBuilder {
public:
    // Function to generate a random match based on the template
    static nlohmann::json randomMatch();

private:
    // Internal function to remove first and last characters from a string
    std::string dropFirstAndLast(const std::string& str);

    // Internal function to get a random key from a JSON file
    static std::string getRandomFromJson(const std::string& filename);

    static std::vector<std::string> getRandomItem(const std::string& filename, const int& count);
};
