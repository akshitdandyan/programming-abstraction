#include <iostream>
using namespace std;

void shiftNegativeNumsToLeft(int* arr, int n) {
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] < 0) {
            int neg = arr[j];
            arr[j] = arr[i];
            arr[i++] = neg;
        }
    }
}

int main() {
    int n, k;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> k;
        arr[i] = k;
    }
    shiftNegativeNumsToLeft(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}