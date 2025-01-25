//---------------INSERT---------------------------
// to insert -> Use => insert(value, position).
// 1. Create newNode
// 2. Create -> Node *temp = head

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

void insert(int val, int pos) {
    if(pos < 0) {
        cout << "Invalid pos" << endl;
        return;
    }

    if(pos == 0) {
        push_front(val);
        return;
    }

    Node *temp = head;
    for(int i=0; i<pos-1; i++ ) {
        if(temp == NULL) {
            cout << "Invalid pos" << endl;
            return;
        }
     temp = temp->next;
    }

    Node *newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
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
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);   // the Linked-list is like => 3 2 1 

  ll.insert(4, 0); // 4 -> value at position -> 0

  ll.print();
 return 0;
}


