#include<iostream>
#include<vector>

using namespace std;
  
  // ------------------Pass by value--------------------

// void changeA (int a) { // pass by value
//     a = 20;
// }
// int main (){
//     int a = 10;

//     changeA(a);

//     cout << "Inside main fnx :" << a << endl;
//     return 0;
// }



//--------------Pass by reference using a Pointer-----------------------------
// Pass By Reference -> It has 2 methods => a. pointers & b. references(alias)

// void changeA (int *a) { 
//     *a = 20;
// }
// int main (){
//     int a = 10;

//     changeA(&a);

//     cout << "Inside main fnx :" << a << endl;
//     return 0;
// }




// -------------Pass by reference using a alias------------------------

void changeA (int &a) { 
    a = 20;
}
int main () {
    int a = 10;

    changeA(a);

    cout << "Inside main fnx :" << a << endl; // 20
    return 0;
}



