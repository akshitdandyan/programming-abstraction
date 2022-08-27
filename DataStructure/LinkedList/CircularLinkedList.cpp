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

class CircularLinkedList {
public:
    Node* head;
    Node* tail;
    CircularLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insertAtTail(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            head->next = tail;
            tail->next = head;
        }
        else {
            tail->next = newNode;
            newNode->next = head;
            head->prev = newNode;
            tail = newNode;
        }
    }


    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
            if (temp->next == head) {
                cout << temp->data << " ";
                break;
            }
        }
        cout << endl;
    }
};

int main() {
    CircularLinkedList cl;
    cl.insertAtTail(1);
    cl.insertAtTail(2);
    cl.insertAtTail(3);
    cl.insertAtTail(4);
    cl.insertAtTail(5);
    cl.printList();


}