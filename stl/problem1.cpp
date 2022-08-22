#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    // create vector of size 5
    vector <int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    vector <int> v2(v1);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    vector <int> v3 = v2;
    v3.push_back(9);
    v3.push_back(10);

    //print v1
    cout << "v1: ";
    for (vector <int>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";
    }

    //print v2
    cout << "\nv2: ";
    for (vector <int>::iterator it = v2.begin(); it != v2.end(); it++) {
        cout << *it << " ";
    }

    // print v3
    cout << endl << "v3: ";
    for (vector <int>::iterator it = v3.begin(); it != v3.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;



    // store frequency of each element in a vector
    cout << "Vector:" << endl;
    vector <int>::iterator it;
    for (it = v1.begin(); it != v1.end(); it++) {
        int count = 1;
        for (vector <int>::iterator it2 = v2.begin(); it2 != v2.end(); it2++) {
            if (*it == *it2) {
                count++;
            }
        }
        for (vector <int>::iterator it3 = v3.begin(); it3 != v3.end(); it3++) {
            if (*it == *it3) {
                count++;
            }
        }
        cout << *it << ": " << count << endl;
    }

    // store frequency of each element in a map
    map <int, int> m;
    for (it = v1.begin(); it != v1.end(); it++) {
        int count = 1;
        for (vector <int>::iterator it2 = v2.begin(); it2 != v2.end(); it2++) {
            if (*it == *it2) {
                count++;
            }
        }
        for (vector <int>::iterator it3 = v3.begin(); it3 != v3.end(); it3++) {
            if (*it == *it3) {
                count++;
            }
        }
        m[*it] = count;
    }

    // print map
    cout << "Map: " << endl;
    for (map <int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }



    return 0;
}