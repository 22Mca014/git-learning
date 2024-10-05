#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    cout << "Enter size of string:" << endl;
    int a;
    cin >> a;

    map<string, int> m;
    cout << "Enter strings:" << endl;

    for (int i = 0; i < a; i++) {
        string input;
        cin >> input;
        m[input]++;
    }

    cout << "Unique strings in lexicographical order with their frequency:" << endl;
    for (const auto& p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
