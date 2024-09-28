// front ->  to print a front value or first value inthe array of the vector 

#include<iostream>
#include<vector>

using namespace std;

int main () 
{
    vector<int> vec; // create a empty array in the vector
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    // vec.pop_back(); // 45

    cout << "The front value is : " << vec.front()<< endl;
    cout << "The last value is : " << vec.back() << endl;

    

    return 0;
}