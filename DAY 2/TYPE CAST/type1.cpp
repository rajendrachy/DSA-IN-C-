

#include<iostream>
using namespace std;

int main () {

   double price = 100.99;
   int newprice = (int)price; // explice typecasting

   //double - >> 8 byte
   //int ->> 4 byte

    cout << newprice<< endl;

    return 0;
}


