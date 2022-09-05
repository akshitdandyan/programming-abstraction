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

class CircularQueue {
    Node* front;
    Node* rear;
public:
    CircularQueue() {
        this->front = NULL;
        this->rear = NULL;
    }
    bool isEmpty() {
        return this->front == NULL;
    }
    bool isFull() {
        Node* temp = new Node(0);
        if (temp == NULL) {
            return true;
        }
        else {
            delete temp;
            return false;
        }
    }
    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full" << endl;
        }
        else {
            Node* newNode = new Node(data);
            if (this->front == NULL) {
                this->front = newNode;
                this->rear = newNode;
            }
            else {
                this->rear->next = newNode;
                this->rear = newNode;
            }
            this->rear->next = this->front;
        }
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        }
        else {
            // check if there is only one node
            if (this->front == this->rear) {
                delete this->front;
                this->front = NULL;
                this->rear = NULL;
            }
            else {
                Node* temp = this->front;
                this->front = this->front->next;
                this->rear->next = this->front;
                delete temp;
            }
        }
    }
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else {
            return this->front->data;
        }
    }
    void display() {
        Node* temp = this->front;
        while (temp->next != this->front) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
};

int main() {

    CircularQueue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    q.dequeue();

    q.display();

    while (!q.isEmpty()) {
        // cout << q.peek() << " ";
        q.display();
        q.dequeue();
    }

    return 0;
}