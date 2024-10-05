// set the bit
#include <iostream>
using namespace std;

// Function to set the ith bit of a number
int setIthBit(int num, int i) {
    // Shift 1 to the left by i positions, then OR it with the number.
    return num | (1 << i);
}

// Function to print the binary representation of a number
void printBinary(int num) {
    // Print binary by shifting each bit from left to right
    for (int i = 31; i >= 0; i--) {
        cout << ((num >> i) & 1);
        if (i % 4 == 0) cout << " "; // Formatting for easier reading
    }
    cout << endl;
}

int main() {
    int num = 13;  // Example number (binary: 1101)
    int i = 1;     // Index of the bit to set (0-based from right)

    cout << "Original number: " << num << endl;
    cout << "Binary representation: ";
    printBinary(num);

    int result = setIthBit(num, i);

    cout << "Number after setting the " << i << "-th bit: " << result << endl;
    cout << "Binary representation: ";
    printBinary(result);

    return 0;
}
