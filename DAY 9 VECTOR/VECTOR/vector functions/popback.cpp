#include<iostream>
#include<vector>

using namespace std;

int main () {
    vector<int> vec; // create a empty vector 

    cout<< "Before the Size is: " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35); 
    vec.push_back(45);
     // the array is : [25, 35, 45]-->> push int he last
     cout<< "After the Size is : " << vec.size() << endl;


     vec.pop_back(); // delete the last array in the vector 
                // the array will be -->> [25, 35]

   for (int i : vec) { // for Each lopps in the vector
    cout<<"The value is : " <<i <<endl;
   }


    return 0;
}



