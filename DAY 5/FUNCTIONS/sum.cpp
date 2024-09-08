#include<iostream>
using namespace std;

int sum (int a, int b) {
    int s = a + b;
    return s;
}

// -->>>> // function is used to reduced the redundency of the code or repetation of the code

int main () {

    cout << sum (10, 50) << endl;
    
    return 0;
}