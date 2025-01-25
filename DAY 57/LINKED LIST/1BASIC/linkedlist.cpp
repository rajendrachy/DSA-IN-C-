//-----------------Linked List-----------------------------
// Array and Vectors -> They are in the contegious form or memory.

// Linked list -> It is a Linear data structure in the c++
// it is a dynamic data structure.
// Linked list is like a => list.
// In last linked list there should be store NULL value.
// LInked List has Head and tail Pointer and tails is a optional pointer.


// ---------------Major function of LInked List------------------------
 // a.  push_front() -> New node create in the front.
 // b. push_back() -> add additional value inthe back.
 // c. pop_front() -> delete a value from the beginning
 // d. pop_back() -> delete a value from the end
 
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next; // next pointer => Always store Next node address. 


    Node(int val) {
      data = val;
      next = NULL;
    }
};


class List {
   private:
   Node *head;
   Node *tail;

   public:
   List() {
    head = tail = NULL;
   }
};

int main()
{

    return 0;
}