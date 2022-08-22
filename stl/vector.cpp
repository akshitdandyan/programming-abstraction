#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v;
    v.push_back(1);
    cout << "Size: " << v.size() << endl;
    cout << "Memory Allocation: " << v.capacity() << endl << endl;
    v.push_back(2);
    cout << "Size: " << v.size() << endl;
    cout << "Memory Allocation: " << v.capacity() << endl << endl;
    v.push_back(3);
    cout << "Size: " << v.size() << endl;
    cout << "Memory Allocation: " << v.capacity() << endl << endl;
    v.push_back(4);
    cout << "Size: " << v.size() << endl;
    cout << "Memory Allocation: " << v.capacity() << endl << endl;
    v.push_back(5);
    cout << "Size: " << v.size() << endl;
    cout << "Memory Allocation: " << v.capacity() << endl << endl;


    v.insert(v.end(), 4, 100);
    cout << "Size: " << v.size() << endl;
    cout << "Memory Allocation: " << v.capacity() << endl << endl;


    for (vector <int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}