// ---------------Pop_front() & Pop_back()--------------
// Store the head in the temp variable first to delete a head or front value in the linked lsit
// delete with the delete keyboard



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

void pop_front() {
    if(head == NULL) {
        cout << " LL is Empty" << endl;
        return;
    }

    Node *temp = head;
    head = head->next;
    temp->next = NULL;

    delete temp;
}

void pop_back() {
  if(head == NULL) {
    cout << "LL is empty" << endl;
    return;
  }

  Node *temp = head;
  while(temp->next != tail) {
    temp = temp->next;
  }

  temp->next = NULL;
  delete tail;
  tail = temp;
}

// ------display the Linked List-------
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
 ll.pop_front();

  ll.print();

  ll.pop_back();
  ll.print();
 return 0;
}


