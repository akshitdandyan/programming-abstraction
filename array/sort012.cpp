#include <iostream>
using namespace std;

void sort012(int* arr, int n) {
    int zeroes = 0, ones = 0, twos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeroes++;
        }
        else if (arr[i] == 1) {
            ones++;
        }
        else {
            twos++;
        }
    }
    int i = 0;
    while (zeroes) {
        arr[i] = 0;
        zeroes--;
        i++;
    }
    while (ones) {
        arr[i] = 1;
        ones--;
        i++;
    }
    while (twos) {
        arr[i] = 2;
        twos--;
        i++;
    }

}

int main() {
    int arr[] = { 1,1,0,1,2,1,0,2 };
    int n = 8;
    sort012(arr, n);

    for (int i = 0; i < n;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}