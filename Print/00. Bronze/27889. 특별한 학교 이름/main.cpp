#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::unordered_map<std::string, std::string> school = {
        {"NLCS", "North London Collegiate School"},
        {"BHA",  "Branksome Hall Asia"},
        {"KIS",  "Korea International School"},
        {"SJA",  "St. Johnsbury Academy"}
    };

    std::string abbr;
    std::cin >> abbr;

    std::cout << school[abbr];
    return 0;
}
