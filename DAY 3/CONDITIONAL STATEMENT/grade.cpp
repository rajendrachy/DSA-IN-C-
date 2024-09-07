#include<iostream>
using namespace std;

int main () {
      
    int marks;
     cout << "Enter a marks : ";
     cin >> marks;

    if (marks >= 90) {
        cout << "A" << endl;

    } else if(marks >=80 && marks <90){
        cout << "B" << endl;
    } else {
        cout << "C \n"; // \n -->> for next line
    }
    return 0;
}