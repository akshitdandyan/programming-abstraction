#include <iostream>
using namespace std;

class Node {
public:

    int data;
    Node* next;
    Node* prev;
    Node() {
        next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    // copy constructor
    Node(const Node& other) {
        this->data = other.data;
        this->next = other.next;
        this->prev = other.prev;
    }
};

int main() {
    int n;
    cin >> n;
    Node* head;
    Node* tail;

    for (int i = 0; i < n; i++) {
        cout << "Enter data: ";
        int data;
        cin >> data;
        Node* newNode = new Node(data);
        if (head->next == NULL) {
            cout << "Added Head" << endl;
            head = newNode;
            tail = newNode;
        }
        else {
            cout << "Added Tail" << endl;
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        cout << head->data << endl;

    }

    // cout << head->data << endl;

    // Node* temp = head;

    // while (temp != NULL) {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }



    return 0;
}