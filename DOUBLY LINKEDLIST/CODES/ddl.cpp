#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
public:
    Node* head;
    Node* tail;
    DoublyList() {
        head = NULL;
    }

    // -------------- Insert At Start ------------------------
    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {  // If list is empty
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }


    // ----Insert At End------------------------
    // void push_back(int val) {
    //     Node* newNode = new Node(val);//create a new node

    //     if(head == NULL) {
    //         head = tail = newNode;
    //     } else {
    //         newNode->prev = tail;
    //         tail->next = newNode;
    //         tail = newNode;
    //     }
    // }



    //------------------------Delete Front-------------------------


    void pop_front() {
        if(head == NULL) {
            cout << "DDL is Empty";
            return;
        }

        Node* temp = head;
        head = head->next;

        if(head != NULL) {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }



    // ----------------POP--Back-----------------------
    void pop_back() {

        if(head == NULL) {
            cout << "DDL is Empty";
            return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if(tail != NULL) {
            tail->next = NULL;
        }

        temp->prev = NULL;
        delete temp;
    }

    // -------------- Print the List ------------------------
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyList ddl;
    //-----------Insert at Start--------------------
    ddl.push_front(1);
    ddl.push_front(2);
    ddl.push_front(3);
    ddl.print();  // Output: 3 <-> 2 <-> 1 <-> NULL

//-----------Insert at End----------------------
    // ddl.push_back(10);
    // ddl.push_back(20);
    // ddl.push_back(30);
    // ddl.print();


    // -----Pop Front---------------
    ddl.pop_front();
    ddl.print();


    ddl.pop_back();
    ddl.print();


    return 0;
}



