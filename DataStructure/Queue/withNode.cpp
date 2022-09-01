#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {

    Node* front;
    Node* rear;
public:
    Queue() {
        this->front = NULL;
        this->rear = NULL;
    }
    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (this->front == NULL) {
            this->front = newNode;
            this->rear = newNode;
        }
        else {
            this->rear->next = newNode;
            this->rear = newNode;
        }
    }
    void dequeue() {
        if (this->front == NULL) {
            cout << "Queue is empty" << endl;
        }
        else {
            Node* temp = this->front;
            this->front = this->front->next;
            delete temp;
        }
    }
    int peek() {
        if (this->front == NULL) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else {
            return this->front->data;
        }
    }
    void display() {
        Node* temp = this->front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool isEmpty() {
        return this->front == NULL;
    }
};

int main() {

    int n;
    cin >> n;
    Queue q;
    while (n--) {
        int data;
        cin >> data;
        q.enqueue(data);
    }

    q.display();

    while (!q.isEmpty()) {
        q.dequeue();
        cout << "Dequeued" << endl;
    }

    return 0;
}