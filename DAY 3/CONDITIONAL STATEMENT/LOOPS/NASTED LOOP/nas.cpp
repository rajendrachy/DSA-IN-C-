#include<iostream>
using namespace std;

int main () {
     int n = 5;
    for(int i=1; i<=n; i++) { // 1 line
       int m = 5;
       for(int j=1; j<=m; j++) {
        cout << "* ";
       }

       cout << endl;
    }
    return 0;
}