// ----------------Array Pointer----------------------------------

#include<iostream>
#include<vector>

using namespace std;

// int main () { 
//     int arr[] = {1, 2, 3, 4, 5};
//     cout << arr << endl;
//     cout << *arr << endl; // 1 // point to the first value in the array
//     return 0;
// }




int main () { 
    int arr[] = {1, 2, 3, 4, 5};
    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    return 0;
}


