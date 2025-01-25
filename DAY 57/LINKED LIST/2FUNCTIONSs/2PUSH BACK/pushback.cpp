// Push_back() -> Adding new node at the end
// It has two cases :
// a. head = NULL, 
// b. head = not NULL
// steps : 
// ----------if(head != NULL);---------------
// 1. Create a new node
// 2. tail->next = newNode
// 3. tail = newNode


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
 // --------push_front-------------------
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


// -----------push_back()--------------------

 void push_back(int val) {
    Node *newNode = new Node(val); // creating a new node

    if (head == NULL ) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
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

 ll.push_back(4);
  ll.print();
  


 return 0;
}


