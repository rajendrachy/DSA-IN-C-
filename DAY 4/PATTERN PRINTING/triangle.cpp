// #include<iostream>
// using namespace std;

// int main () {
//     int n = 6;
//     for(int i=0; i<n; i++) { // outer loop
//        for(int j=0; j<i+1; j++) { // inner loop
//         cout << "*";
//        }
//        cout << endl; // end of the line
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main () {
//     int n = 4;
//     for(int i=0; i<n; i++) { // outer loop
//        for(int j=0; j<i+1; j++) { // inner loop
//         cout << (i+1) << " ";
//        }
//        cout << endl; // end of the line
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main () {
//     int n = 4;
//     for(int i=1; i<=n; i++) { // outer loop
//        for(int j=1; j<=i+1; j++) { // inner loop
//         cout << j << " ";
//        }
//        cout << endl; // end of the line
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main () {
//     int n = 4;
//     for(int i=0; i<n; i++) { // outer loop
//        for(int j=i+1; j>0; j--) { // inner loop
//         cout << j << " ";
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
    for(int i=0; i<n; i++) { // outer loop
         //spaces
       for(int j=0; j<i; j++) { // inner loop
        cout << " ";
       }


       //nums

       for(int k=0; k<n-i; k++) {
        cout << (i + 1);
       }
       cout << endl; // end of the line
    }
    return 0;
}












