#include<iostream>
using namespace std;

int main () {

    int n;

    cout << "Enter the no : ";
    cin >> n;
    
    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum = sum + i;
    }

    cout << "The sum is : " << sum;
    return 0;
}