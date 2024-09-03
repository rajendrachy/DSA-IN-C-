#include<iostream>
using namespace std;

int main () {

    int n;
    cout << "Enter the number : ";

    cin >> n;

    if(n % 1 == 0 && n % n == 0 && n % 2 != 0) {
        cout << "The no is Prime : " << n << endl;
    }  else {
        cout << "The no is Not prime : " << n << endl;
    }
    return 0;
}