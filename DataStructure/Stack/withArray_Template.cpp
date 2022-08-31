#include <iostream>
using namespace std;

#define MAX_STACK_SIZE 100

template <class T> class Stack {
private:
    int n;
    int top = -1;

public:
    Stack(int totalElements)
    {
        if (totalElements > MAX_STACK_SIZE)
        {
            cout << "Given Stack size is too large" << endl;
            exit(0);
        }
        else {
            n = totalElements;
        }
    };
    T arr[MAX_STACK_SIZE];
    void push(T element) {
        if (top == n) {
            cout << "Stack is full" << endl;
            return;
        }
        arr[++top] = element;
    };
    T pop() {
        if (top == 0) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[--top];
    }
    T getTop() {
        return arr[top];
    }
    void display() {
        cout << "Stack: ";
        for (int i = top;i >= 0;i--) {

            cout << arr[i] << " ";
        }
        cout << endl << "Top: " << arr[top] << endl;
    }
};

int main() {

    int n;
    cin >> n;
    Stack <float> s(n);

    for (int i = 0;i < n;i++) {
        float element;
        cin >> element;
        s.push(element);
    }

    s.display();

    s.pop();

    s.display();

    return 0;
}