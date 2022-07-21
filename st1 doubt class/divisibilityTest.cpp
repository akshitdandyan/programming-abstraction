#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int C, B;
    cin >> B >> C;
    int g = __gcd(B, C);
    int l = (B * C) / g;
    cout << l / B << endl;
    return 0;
}