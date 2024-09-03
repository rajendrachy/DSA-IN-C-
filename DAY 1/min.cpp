#include<iostream>
using namespace std;

int main () {
    int a,b;
    cout << "Enter a :"<< endl;
    cin >> a;
    cout << "Enter b : " << endl;
    cin >> b;

    if(a < b ) {
        cout << "The min is a :" <<a << endl;

    } else if(a == b) {
        cout << " a == b = " << a  + " " << b << endl;
    } else {
        cout << "The min is b :" << b << endl;
    }

    return 0;
}