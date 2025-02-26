// -------------------Reverse a Linked List ----------------------------------
#include <iostream>
using namespace std;

// Definition for a Node in the linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {} // Constructor for Node
};

// Solution class containing the reverseList function
class Solution {
public:
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while (curr != NULL) {
            next = curr->next;  // Store next node
            curr->next = prev;  // Reverse current node's pointer
            prev = curr;        // Move prev pointer to current node
            curr = next;        // Move to the next node
        }
        
        return prev;  // New head of the reversed list
    }
};

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to create a linked list from an array
Node* createList(const int arr[], int n) {
    if (n == 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* tail = head;

    for (int i = 1; i < n; i++) {
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }

    return head;
}

int main() {
    // Example input: create a linked list
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* head = createList(arr, n);

    cout << "Original list: ";
    printList(head);

    // Reverse the list using the Solution class
    Solution sol;
    head = sol.reverseList(head);

    cout << "Reversed list: ";
    printList(head);

    return 0;
}

