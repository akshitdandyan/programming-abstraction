#include <iostream>
#include <iomanip>
using namespace std;

// kth smallest element
int kthSmallest(int arr[], int n, int k) {
    int i = 0;
    int j = n - 1;
    int pivot = arr[j];
    while (i < j) {
        while (i < j && arr[i] <= pivot) {
            i++;
        }
        while (i < j && arr[j] >= pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    if (i == k - 1) {
        return arr[i];
    }
    else if (i < k - 1) {
        return kthSmallest(arr + i + 1, n - i - 1, k - i - 1);
    }
    else {
        return kthSmallest(arr, i, k);
    }
}


int main() {
    float number = 9839.84784;
    cout << hex << number << endl;
    cout << oct << number << endl;
    cout << dec << number << endl;
    cout << fixed << number << endl;
    cout << setprecision(3) << number << endl;
    cout << showpos << number << endl;

    return 0;
}