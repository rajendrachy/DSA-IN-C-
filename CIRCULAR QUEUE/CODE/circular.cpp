#include<iostream>
using namespace std;

class CircilarQueue{
      int* arr;
      int currSize, cap;
      int f, r;

      public:
      CircilarQueue(int size) {
        cap = size;
        arr = new int[cap];//dynamically array creating
        currSize = 0;
        f=0;
        r=-1;
      }


      void push(int data) { //TC: O(1)
         if(currSize == cap) {
            cout << "Circular queue is full";
            return;
         }

         r = (r+1) % cap;
         arr[r] = data;
         currSize++;
      }

      void pop() { //TC: O(1)
            if(currSize == 0) {
                cout << "CQ is empty";
                return;
            }

            f = (f+1) % cap;
            currSize--;
      }

      int front() { //TC: O(1)
        if(empty()) {
           cout << "CQ is Empty\n";
           return -1;
        }
            return arr[f];
      }

      bool empty() { //TC: O(1)
        return currSize == 0;
      }


      void print() {
        for(int i=0; i<cap; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
      }
};

int main() {
  CircilarQueue cq(3);
  cq.push(1);
  cq.push(2);
  cq.push(3);

  cq.pop();

  cq.push(4);

 //cq.print(); // 4 2 3

 while(!cq.empty()) {
    cout << cq.front() << " "; // 2 3 4
    cq.pop();
 }
 cout << endl;
    return 0;
}