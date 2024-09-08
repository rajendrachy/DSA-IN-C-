#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n) {
    int binary = 0, place = 1;
    while(n > 0) {
        int remainder = n % 2;
        binary += remainder * place;
        place *= 10;
        n /= 2;
    }
    return binary;
}

int binaryToDecimal(int n) {
    int decimal = 0, place = 0;
    while(n > 0) {
        int remainder = n % 10;
        decimal += remainder * pow(2, place);
        place++;
        n /= 10;
    }
    return decimal;
}

int main() {
    int dec = 10;
    int bin = 1010;

    cout << "Decimal to Binary: " << decimalToBinary(dec) << endl;
    cout << "Binary to Decimal: " << binaryToDecimal(bin) << endl;

    return 0;
}
