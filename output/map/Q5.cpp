#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    string input;
    map<char, int> frequencyMap;

    // Taking input string from the user
    cout << "Enter a string: ";
    getline(cin, input);

    // Counting the frequency of each character
    for (char c : input) {
        // Increment the frequency count for each character
        frequencyMap[c]++;
    }

    // Displaying the frequency of each character
    cout << "\nCharacter frequencies:\n";
    for (const auto& entry : frequencyMap) {
        cout << entry.first << " : " << entry.second << endl;
    }

    return 0;
}
