//calculate a factorial of the number


#include<iostream>
using namespace std;


int fact(int x) {
if(x <=1) {
    return 1;
} else {
   return x * fact (x - 1);
}
}

int main () {

    int n;
    cout << "Ener a number : ";
    cin>> n;

    int result = fact(n);

    cout << "The factorial of the number is :" << result; 
    return 0;
}