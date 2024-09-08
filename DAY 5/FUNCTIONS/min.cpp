#include<iostream>
using namespace std;

int min (int a, int b) { // parameters 
  if(a < b) {
    return a;
  } else {
    return b;
  }
}
int main () {

    cout << "Min = " << min(10, 50) << endl; // arguments
    
    return 0;
}