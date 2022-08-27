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

class LinkedList {
public:
    Node* head;
    Node* tail;
    LinkedList() {
        head = NULL;
        tail = NULL;
    }
    void insertAtHead(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtPos(int data, int pos) {
        Node* newNode = new Node(data);
        Node* temp = head;
        int count = 0;
        while (temp != NULL) {
            if (count == pos) {
                newNode->next = temp->next;
                temp->next = newNode;
                newNode->prev = temp;
                if (newNode->next != NULL) {
                    newNode->next->prev = newNode;
                }
                else {
                    tail = newNode;
                }
                break;
            }
            temp = temp->next;
            count++;
        }
    }

    void insertAtTail(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void deleteNode(int data) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == data) {
                if (temp == head) {
                    head = temp->next;
                    head->prev = NULL;
                }
                else if (temp == tail) {
                    tail = temp->prev;
                    tail->next = NULL;
                }
                else {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                delete temp;
                break;
            }
            temp = temp->next;
        }
    }

    void search(int data) {
        Node* temp = head;
        int i = 0;
        while (temp != NULL) {
            if (temp->data == data) {
                cout << "Found at postion: " << i << endl;
                return;
            }
            temp = temp->next;
            i++;
        }
        cout << "Not found" << endl;
    }

    void printList() {
        if (head == NULL) {
            cout << "Empty List" << endl;
        }
        else {
            Node* temp = head;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    void printRev() {
        if (head == NULL) {
            cout << "Empty List" << endl;
        }
        else {
            Node* temp = tail;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->prev;
            }
            cout << endl;
        }
    }
    void deleteAll() {
        if (head == NULL) {
            cout << "Empty List" << endl;
        }
        else {
            Node* temp = head;
            while (temp != NULL) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }
    }
};

int main() {

    LinkedList ll;
    cout << "Enter number of nodes: ";
    int n;
    cin >> n;
    cout << "Enter data: ";
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        ll.insertAtTail(data);
    }
    ll.printList();
    int postion, newData;
    cout << "Enter position and data for insertions" << endl;
    cin >> postion >> newData;
    ll.insertAtPos(newData, postion);
    ll.printList();
    int searchFor;
    cout << "Enter the data to search: ";
    cin >> searchFor;
    ll.search(searchFor);
    cout << "Reverse: ";
    ll.printRev();
    ll.deleteAll();

    return 0;
}