//calculate sum of digits of a number

#include<iostream>
using namespace std;

int sumofdigit(int num) {
    int digit = 0;
    while(num > 0) {
        int lastdigit = num % 10;
        num = num / 10;
        digit += lastdigit;
    }
    return digit;
}

int main () {


cout << sumofdigit(2235) << endl;
    return 0;
}