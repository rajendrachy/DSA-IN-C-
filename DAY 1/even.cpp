#include<iostream>
using namespace std;

int main () {


    int number;
    cout << "Enter the number : ";
    cin>> number;


    //condition

    if(number % 2 == 0) {
      cout << "The no is Even";
    }
     else {
        cout << "The no is Odd";
     }

    return 0;
}