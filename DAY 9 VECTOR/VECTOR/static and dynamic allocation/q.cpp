// #include<iostream>
// #include<vector>

// using namespace std;

// int main () {
//     vector<int> vec; // empty vector -->> 0 size vector is created 

//     vec.push_back(0);
//     vec.push_back(1); 
//     vec.push_back(2);

//    cout <<"The size is: "  << vec.size() << endl; // 3
//    cout << "The capacity is: " << vec.capacity() << endl; // 4

//     return 0;
// }






#include<iostream>
#include<vector>

using namespace std;

int main () {
    vector<int> vec; // empty vector -->> 0 size vector is created 

    vec.push_back(0);
    vec.push_back(1); 
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);



   cout <<"The size is: "  << vec.size() << endl; // 5
   cout << "The capacity is: " << vec.capacity() << endl; // 8

    return 0;
}






