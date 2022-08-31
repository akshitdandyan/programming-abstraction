#include <iostream>
using namespace std;

#define  MAX_STACK_SIZE 100

//stack using array
class Stack {
private:
    int n;
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
    int top = -1;
    int arr[MAX_STACK_SIZE];
    void push(int element);
    int pop();
    int getTop();
    void display();
};

int Stack::getTop() {
    return arr[top];
}

void Stack::push(int element) {
    if (top == n) {
        cout << "Stack is full" << endl;
        return;
    }
    arr[++top] = element;
}

int Stack::pop() {
    if (top == 0) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return arr[--top];
}

void Stack::display() {
    cout << "Stack: ";
    for (int i = top;i >= 0;i--) {

        cout << arr[i] << " ";
    }
    cout << endl << "Top: " << arr[top] << endl;
}

int main() {

    int n;
    cin >> n;
    Stack s(n);

    for (int i = 0;i < n;i++) {
        int element;
        cin >> element;
        s.push(element);
    }

    s.display();

    s.pop();

    s.display();

    return 0;
}