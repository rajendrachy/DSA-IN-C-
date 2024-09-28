#include<iostream>
#include<vector>

using namespace std;

int main () {
    vector<int> vec;

    cout<< "Before the Size is: " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35); 
    vec.push_back(45);
     // the array is : [25, 35, 45]-->> push int he last
     cout<< "After the Size is : " << vec.size() << endl;

   for (int i : vec) { // for Each lopps in the vector
    cout<<"The value is : " <<i <<endl;
   }


    return 0;
}



