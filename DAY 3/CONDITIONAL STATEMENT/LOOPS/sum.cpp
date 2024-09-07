//sum of the number from 1 to n
#include<iostream>
using namespace std;
int main () {
      
      int n;
      cout << "Enter a number : ";
      cin >> n;

        int sum = 0;
      for(int i=1; i<=n; i++) {
        sum = sum + i;
      }

      cout << "sum =  " << sum;

    return 0;
}