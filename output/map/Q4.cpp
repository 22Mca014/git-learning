//Create a std::map that stores city names (as keys) and their populations (as values). Write a program to sort and print the cities based on their populations using a custom comparator.
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// Comparator function to sort by population (second value in the pair)
bool sortByPopulation(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;  // Sort in descending order of population
}

int main() {
    map<string, int> cityPopulations;

    // Adding some cities and their populations to the map
    cityPopulations["New York"] = 8419600;
    cityPopulations["Los Angeles"] = 3980400;
    cityPopulations["Chicago"] = 2716000;
    cityPopulations["Houston"] = 2328000;
    cityPopulations["Phoenix"] = 1690000;

    // Copy map elements into a vector of pairs
    vector<pair<string, int>> cityVector(cityPopulations.begin(), cityPopulations.end());

    // Sort the vector by population using the custom comparator
    sort(cityVector.begin(), cityVector.end(), sortByPopulation);

    // Printing cities sorted by population
    cout << "Cities sorted by population (descending order):\n";
    for (const auto& city : cityVector) {
        cout << city.first << ": " << city.second << " people\n";
    }

    return 0;
}
