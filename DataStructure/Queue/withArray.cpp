#include <iostream>
using namespace std;

class Queue {
    int* arr;
    int front;
    int rear;
    int size;
public:
    Queue(int n) {
        arr = new int[n];
        front = -1;
        rear = 0;
        size = n;
    }

    void enqueue(int data) {
        if (rear == size) {
            cout << "Queue is full" << endl;
        }
        else {
            arr[rear++] = data;
            if (front == -1) {
                front = 0;
            }
            cout << "Enqueued " << data << endl;
        }
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        else {
            for (int i = 0; i < rear - 1; i++) {
                arr[i] = arr[i + 1];
            }
            rear--;
            cout << "Dequeued, front at " << front << endl;
        }
    }

    int peek() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else {
            return arr[front];
        }
    }

    void display() {
        for (int i = front;i < rear;i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == size;
    }

    // destructor
    ~Queue() {
        delete[] arr;
    }
};


int main() {
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(10);

    q.display();

    q.~Queue();
    return 0;
}