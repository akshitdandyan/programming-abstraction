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

    // find mid of linked list using fast & slow pointer
    Node* findMid() {
        Node* slow = head;
        Node* fast = head;
        while (fast != NULL && fast->next != NULL) {
            if (slow == fast && slow != head) {
                cout << "Cycle detected" << endl;
                break;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

LinkedList sortAndMergeLinkedList(Node* head1, Node* head2) {

}

void sortLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        Node* temp2 = temp->next;
        while (temp2 != NULL) {
            if (temp->data > temp2->data) {
                int tempData = temp->data;
                temp->data = temp2->data;
                temp2->data = tempData;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
}

LinkedList mergeLinkedList(Node* head1, Node* head2) {
    LinkedList sorted;
    Node* temp1 = head1;
    Node* temp2 = head2;
    cout << "temp1: " << temp1->data << endl;
    cout << "temp2: " << temp2->data << endl;

    while (temp1 != NULL && temp2 != NULL) {
        cout << "Comparing " << temp1->data << " and " << temp2->data << endl;
        if (temp1->data < temp2->data) {
            cout << "Inserting: " << temp1->data << endl;
            sorted.insertAtTail(temp1->data);
            temp1 = temp1->next;
        }
        else {
            cout << "Inserting: " << temp2->data << endl;
            sorted.insertAtTail(temp2->data);
            temp2 = temp2->next;
        }
    }
    while (temp1 != NULL) {
        cout << "Inserting: " << temp1->data << endl;
        sorted.insertAtTail(temp1->data);
        temp1 = temp1->next;
    }
    while (temp2 != NULL) {
        cout << "Inserting: " << temp2->data << endl;
        sorted.insertAtTail(temp2->data);
        temp2 = temp2->next;
    }
    return sorted;
}

int main() {

    LinkedList ll1;
    LinkedList ll2;
    cout << "ll1 Enter number of nodes: ";
    int n;
    cin >> n;
    cout << "Enter data: ";
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        ll1.insertAtTail(data);
    }
    sortLinkedList(ll1.head);
    ll1.printList();
    return 0;

    cout << "ll2 Enter number of nodes: ";
    cin >> n;
    cout << "Enter data: ";
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        ll2.insertAtTail(data);
    }

    LinkedList sortedMerged = mergeLinkedList(ll1.head, ll2.head);
    cout << "Merged: ";
    sortedMerged.printList();

    return 0;
}