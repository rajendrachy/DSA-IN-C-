#include<iostream>
#include<vector>

using namespace std;

int main () {
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'}; 
   for (char i : vec) { // for Each lopps in the vector
    cout<<"The value is : " <<i <<endl; // i -->> index value 
   }

    return 0;
}


