//max of two number
#include<iostream>
using namespace std;

int main () {
int number1, number2;
cout << "Enter the number1 : ";
cin >> number1;

cout << "Enter the number2 :";
cin >> number2;

int max = number1;


if(max > number2) {
max = number1;
} else {
    max = number2;
}

cout << "The max is : " << max;
    return 0;
}