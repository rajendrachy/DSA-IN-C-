#include<iostream>

using namespace std;

int main () {

    int a, b;
    cin>>a >> b;

    int min = a;
    if(min > b) {
        min = b;
    } else {
        min = a;
    }



    cout << "The min is : " << min;
    return 0;
}