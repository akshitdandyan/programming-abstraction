#include <iostream>
using namespace std;


class CircularQueue {
    int* arr;
    int front;
    int rear;
    int size;
public:
    CircularQueue(int n) {
        arr = new int[n];
        front = rear = -1;
        size = n;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full" << endl;
        }
        else {
            if (front == -1) {
                front = 0;
            }
            rear = (rear + 1) % size;
            arr[rear] = data;
            cout << "Enqueued " << data << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        else {
            if (front == rear) {
                front = rear = -1;
            }
            else {
                front = (front + 1) % size;
            }
            cout << "Dequeued, front at " << front << endl;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else {
            return arr[front];
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        else {
            for (int i = front;i != rear;i = (i + 1) % size) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    // destructor
    ~CircularQueue() {
        delete[] arr;
    }
};


int main() {
    CircularQueue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();
    return 0;
}

// circular queue description
// https://www.geeksforgeeks.org/circular-queue-set-1-introduction-array-implementation/