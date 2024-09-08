#include<iostream>
using namespace std;

int sum (int a, int b) {
    return a + b;
}

int main () {
    int x = 5, y = 6;

    cout << "Sum = " << sum (x, y) << endl;
}