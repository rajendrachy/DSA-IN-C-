// pront a no from 1 to 5

#include<iostream>
using namespace std;

int main () {

    int n;
    cout << "Enter a no : ";
    cin >> n;

     int count = 1;
    for(int i=1; i<=n; i++) {
        cout << count << " " << endl;
        count++;
    }
    return 0;
}