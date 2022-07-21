#include <iostream>
using namespace std;

int main() {

    bool running = true;
    do {
        int m, n;
        cin >> m >> n;
        int a[m][n];
        int sum = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                sum += a[i][j];

            }
        }

        if (sum < 300) {
            cout << "All elements sum is less then 300, enter values again..." << endl;
            continue;
        }
        // sum all elements in each row
        for (int i = 0; i < m; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum += a[i][j];
                // check sum is multiple of 3 and 5
                if (sum % 3 != 0 || sum % 5 != 0) {
                    cout << "Row " << i << " sum is not multiple of 3 and 5, enter values again..." << endl;
                    break;
                }
            }
        }
    } while (running);
    cout << "Perfect Input" << endl;

    return 0;
}