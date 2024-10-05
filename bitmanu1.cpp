// get the bit
#include <iostream>
using namespace std;

int getIthBit(int num, int i) {
    // Shift 1 to the left by i positions, then AND it with the number.
    // If the result is non-zero, the ith bit is 1, otherwise it's 0.
    return (num & (1 << i)) ? 1 : 0;
}

int main() {
    int num = 13; // Example number (binary: 1101)
    int i = 2;    // Index of the bit (0-based from right)

    cout << "The " << i << "-th bit is: " << getIthBit(num, i) << endl;
    cout<<(1<<2);
    cout<<endl<<(num & (1 << i));


    return 0;
}
