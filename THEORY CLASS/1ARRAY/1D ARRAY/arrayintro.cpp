#include<iostream>
using namespace std;

// int main () {

//     int n = 5;
//     //int roll_no[n]; // or, 
//    //int rol_no[sizeof(double)];

//    while(n++ <= 10) {
//      int roll_no[n];
//      cout << "Array size is :" << n << endl;
//    }

//    return 0;
// }


// ------------Initialization at a Compile time---------------------------

// int main () {
//     //extern int a[]; // no error -> due to extern // This is DECLERATION
//     // int roll_no[]; //error -> This is DEFINATION
//     //int roll_no[] = {1, 4, 8, 0, -5}; // intializing at the same time no need to give a size
//     //int roll_no[10] = {1, 2, 3}; // remaining values are 0
//     // int roll_no[5] = {1, 2, 3, 4, 5, 6}; // to many initialization are not allowed

//     return 0;
// }



// --------------Initialization at Run Time-----------------------------------

int main () {

   int roll_no[5];
   cout << "Enter a roll no:";
   for(int i=0; i<5; i++) {
    cin >> roll_no[i];
   }

   cout << roll_no << endl; // Print a Base adress(first address)
   cout << &roll_no << endl; // Print a Base adress(first address)
    return 0;
}


