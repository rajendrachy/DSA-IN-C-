#include<iostream>
#include<vector>

using namespace std;

// int main() {
//     // int ** ptr;
//     // cout << ptr << endl; // Garbage value 
    

//     // int ** ptr = NULL;
//     // cout << ptr << endl; // 0 // NULL pointer cannot be dereferenging
//                          // cout << *ptr << endl; // error : Segmentation fault
//     return 0;
// }



int main () {

    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl; // 5
    cout << **q << endl; // 5
    cout << p << endl;
    cout << *q << endl; 
    cout << p << endl; // Garbage value

    return 0;
}

