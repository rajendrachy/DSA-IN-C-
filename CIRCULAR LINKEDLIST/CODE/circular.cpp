#include<iostream>
using namespace std;

class Node {
   public:
   int data;
   Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};


class CircularList {
   Node* head;
   Node* tail;
public:
   CircularList() {
    head = tail = NULL;
   }
//------------inserAtHead------------------------
   void insertAtHead(int val) {
       Node* newNode = new Node(val); // creating a new node
       if(head == NULL) { // or, we cal use tail also i.e tail == NULL
         head = tail = newNode;
         tail->next = head; // make this circular
       } else {
        newNode->next = head;
        head = newNode;
        tail->next = head;
       }

   }



   //---------------InsertAtTail--------------------------------
   void insertAtTail(int val) {
      Node* newNode = new Node(val);

      if(tail == NULL) {
         head = tail = NULL;
         tail->next = head;

      } else {
         newNode->next = head;
         tail->next = newNode;
         tail = newNode;

      }

   }

   //--------------traversing------------------
   void display() {
      if(head == NULL) {
        return;
      }

       cout << head->data << "->"; // print head
      Node* temp = head->next; // temp point to head->next data

     while(temp != head) {
        cout << temp->data << "->";
        temp = temp->next;
     }
    //  cout << temp->data << endl;
    cout << endl;
   }

};


int main() {
   CircularList cll;
   cll.insertAtHead(1);
   cll.insertAtHead(2);
   cll.insertAtHead(3);
   cll.display();


   cll.insertAtTail(10);
   cll.insertAtTail(20);
   cll.insertAtTail(30);
   cll.display();
    return 0;
}

