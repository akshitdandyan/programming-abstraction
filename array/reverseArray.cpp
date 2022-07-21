#include <iostream>
using namespace std;

void reverseArray(int* arr, int n) {
    for (int i = 0, j = n - 1; i <= j;i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++) {
        cin >> k;
        arr[i] = k;
    }

    reverseArray(arr, n);

    for (int i = 0; i < n;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}