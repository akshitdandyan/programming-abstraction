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

class Stack {
public:
    Node* top;
    Stack() {
        this->top = NULL;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = this->top;
        this->top = newNode;
    }

    int pop() {
        if (this->top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int data = this->top->data;
        Node* temp = this->top;
        this->top = this->top->next;
        delete temp;
        return data;
    }

    int getTop() {
        if (this->top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return this->top->data;
    }

    bool isEmpty() {
        return this->top == NULL;
    }

    void print() {
        Node* temp = this->top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    s.print();
    cout << "Top: " << s.getTop() << endl;

    s.pop();

    s.print();
    cout << "Top: " << s.getTop() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();



    return 0;
}