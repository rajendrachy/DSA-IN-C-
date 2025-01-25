#include<iostream>
#include<vector>

using namespace std;
// -------------INcrement------------------------

// int main () { 
//     int arr[] = {1, 2, 3, 4, 5};
//     int a = 10;
//     int *ptr = &a;

//     cout << ptr << endl;
//     ptr++;
//     cout << ptr << endl;
//     return 0;
// }


// -------------Add-------------------
// int main () { 
//     int arr[] = {1, 2, 3, 4, 5};
//     int a = 10;
//     int *ptr = &a;

//     cout << ptr << endl;
//     ptr = ptr + 2; // 2 int -> 8B
//     cout << ptr << endl; // +8
//     cout << *arr << endl; // 1
//     cout << *(arr+1) << endl; // 2
//     return 0;
// }






// --------------Compair------------------------

int main () { 
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr1;
    int *ptr2;
    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout << (ptr1 < ptr2) << endl; // true -> 1
    return 0;
}




