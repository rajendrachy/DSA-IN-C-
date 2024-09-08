// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int n = 5;
// //     for (int i = 1; i <= n; i++) {
// //         for (int j = i; j < n; j++)
// //             cout << " ";
// //         for (int k = 1; k <= (2*i-1); k++)
// //             cout << "*";
// //         cout << endl;
// //     }
// //     return 0;
// // }




// //hollow diamont pattern

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j < n; j++)
//             cout << " ";
//         cout << "*";
//         if (i > 1) {
//             for (int j = 1; j < 2*(i-1); j++)
//                 cout << " ";
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = n-1; i >= 1; i--) {
//         for (int j = n; j > i; j--)
//             cout << " ";
//         cout << "*";
//         if (i > 1) {
//             for (int j = 1; j < 2*(i-1); j++)
//                 cout << " ";
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }




//butterfly pattern

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= 2*(n-i); j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    
    // Lower part
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= 2*(n-i); j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    
    return 0;
}
