// ---------------Major function of LInked List------------------------
// a. push_front() -> New node create in the front.
// b. push_back() -> add additional value inthe back.
// c. pop_front() -> delete a value from the beginning
// d. pop_back() -> delete a value from the end

// Linked List -> It is begin from a NULL value
// head = NUll, tail = NULL;

// ------------While Pushing the value---------------
// There should be two cases:
// Head -> NULL or Not NULL
// -----------push_front(1)--------------------
// Step1 : Create a new node to store a value -> 
// Step2 : then the head and tail focus on the new Node


// -------------push_front(2)--------------------
// step1: Create a newNode to store value
// step2: then newNode -> next(pointer) -> points to the head pointer
// step 3: Update the node => head = newNode

// tail -> Always point to the NULL Value
// Head -> point to the front or beginning
// In linked list -> We should only travel FORWARD not a BACKWARD.

#include <iostream>
using namespace std;


class Node
{
public:
    int data;
    Node *next; // next pointer => Always store Next node address.

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
private:
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
         Node *newNode = new Node(val); // -> Syntax to create a new node // dynamic
        // or,
        // Node newNode(val); // Static {
        
         if(head == NULL) {
            head = tail = newNode;
            return;
        }else {
            newNode->next = head; // or, (*newNode).next = head
            head = newNode;
        }
    }

// display the Linked List
    void print() {
        Node *temp = head;

        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL"<< endl;
    }
};


int main()
{
  List ll; // Creating a Linked list Obj
  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);   // the Linked-list is like => 3 2 1 

  ll.print();

    return 0;
}


