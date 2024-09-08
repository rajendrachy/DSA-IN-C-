// Calculate the sum of number from 1 to N

#include<iostream>
using namespace std;

int sumofN(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << sumofN(5) << endl;
    cout << sumofN(10) << endl;

    return 0;
}
