//sum of the odd ->> number from 1 to n
#include<iostream>
using namespace std;
int main () {
      
      int n;
      cout << "Enter a number : ";
      cin >> n;

        int sum = 0;
      for(int i=1; i<=n; i++) {
        if(i % 2 != 0) {
            sum = sum + i;
        }
      }

      cout << " odd sum =  " << sum;

    return 0;
}