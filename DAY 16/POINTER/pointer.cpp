#include<iostream>
#include<vector>
using namespace std;

// int main() {
//     int a = 10;
//     cout << &a<< endl; // Print the address of a variable
//     return 0;
// }

// ---------------pointer------------------------
// int main () {
//     int a = 10;
//     int *ptr = &a;
//     cout << *ptr << endl; // 10
//     cout << ptr << endl; // adress of the ptr
//     return 0;
// }



// -----------------pointer to pointer-----------------------------
int main () {
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;

    cout << &ptr << endl; // Print the address 
    cout << ptr2 << endl; // Also print the address
    cout << *ptr << endl; // 10
    cout << **ptr2 << endl; // 10
    return 0;
}



