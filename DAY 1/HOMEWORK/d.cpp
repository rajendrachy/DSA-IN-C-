#include<iostream>
using namespace std;

int main () {

    int age;
    cout << "Enter a age :";
    cin >> age;

    if(age <= 17)  {
        cout << "Voting is not allowed";
    } else if(age >= 80){
        cout << "Age is over";
    } else {
        cout << "Voting is allowed";
    }


    return 0;
}