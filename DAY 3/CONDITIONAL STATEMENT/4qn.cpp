// #include<iostream>
// using namespace std;

// int main () {

//     char ch;
//     cout << "Enter a character : ";
//     cin >> ch;

//     if( ch >= 'a' && ch <= 'z') {
//         cout << "Lower case" << endl;
//     } else {
//         cout << "Upper Case" << endl;
//     }
//     return 0;
// }


// or,   

#include<iostream>
using namespace std;

int main () {

    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    if( ch >= 65 && ch <= 90) { // implicite type conversion
                                // ch -->> convert into a its ASCII value
        cout << "Upper case" << endl;
    } else {
        cout << "Lower Case" << endl;
    }
    return 0;
}