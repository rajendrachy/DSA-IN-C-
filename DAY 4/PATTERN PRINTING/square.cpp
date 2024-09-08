// #include<iostream>
// using namespace std;

// int main () {
//     int n = 4;
//     for(int i=1; i<=n; i++) { // outer loop
//        for(int j=1; j<=n; j++) { // inner loop
//         //cout << j << " ";
//         cout << "*" << " ";
//        }
//        cout << endl; // end of the line
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main () {
//     int n = 6;
//     for(int i=1; i<=n; i++) { // outer loop
//     char ch = 'A';
//        for(int j=1; j<=n; j++) { // inner loop
//         cout << ch << " ";
//         ch = ch + 1;
//        }
//        cout << endl; // end of the line
//     }
//     return 0;
// }



#include<iostream>
using namespace std;

int main () {
    int n = 4;
    int num = 1;
    for(int i=1; i<=n; i++) { // outer loop
       for(int j=1; j<=n; j++) { // inner loop
        cout << num << " ";
        num ++;
       }
       cout << endl; // end of the line
    }
    return 0;
}