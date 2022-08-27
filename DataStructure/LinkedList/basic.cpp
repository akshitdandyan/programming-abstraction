#include <iostream>
using namespace std;

class Node {
public:

    int data;
    Node* next;
    Node() {
        next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// class LinkedList {
//     Node* head;
//     Node* tail;
//     int size;
//     // public:
// };


int main() {

    // Node* head = new Node(1);
    // Node* second = new Node(2);
    // Node* third = new Node(3);
    // Node* fourth = new Node(4);

    // head->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = NULL;

    // Node* temp = head;
    // while (temp != NULL) {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    // delete head, second, third, fourth;

    Node* head, tail;
    cout << "Enter total number of nodes: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter data: ";
        int data;
        cin >> data;
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            head = newNode;
        }
        else {
            tail.next = newNode;
            tail = newNode;
        }
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}