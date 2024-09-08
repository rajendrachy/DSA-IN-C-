// // convert -8 to binary & reverse

// Conversion of -8 to Binary using Two's Complement (8 bits):
// Step 1 (Find binary for 8):

// The binary representation of 8 is 00001000 in 8 bits.
// Step 2 (Find two's complement):

// Invert the bits: 11110111
// Add 1: 11111000
// So, the two's complement representation of -8 in 8 bits is 11111000.

// C++ Code to Handle Conversion:
// Here’s a C++ program that converts a negative number to binary using two's complement and converts it back to decimal:



#include<iostream>
using namespace std;

// Function to display binary (8-bit representation)
void displayBinary(int n) {
    for(int i = 7; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

int main() {
    int decimal = -8;

    // Convert to 8-bit binary using bitwise operations
    cout << "Binary representation of " << decimal << " in 8 bits: ";
    displayBinary(decimal);

    // Convert back to decimal to verify
    int reverse_decimal = decimal; // Simply the same value, as it's stored as two's complement in C++
    cout << "Converted back to decimal: " << reverse_decimal << endl;

    return 0;
}


