#include<iostream>
#include<vector>

using namespace std;

int main () {
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'}; 

    cout << "Size : " << vec.size() << endl;
   for (char i : vec) { // for Each lopps in the vector
    cout<<"The value is : " <<i <<endl;
   }


    return 0;
}



