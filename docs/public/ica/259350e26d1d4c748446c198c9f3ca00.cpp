#include <iostream>
using namespace std;

int main() {
    int k;
    while (cin >> k, k) {
        for (int m = k + 1; true; m++) {
            int pos = 0;
            int n = k * 2;
            bool hasGood = false;
            for (int i = 1; i <= k; i++) {
                pos = (pos + m - 1) % n;
                if (pos < k) {
                    hasGood = true;
                    break;
                }
                n--;
            }
            if (!hasGood) {
                cout << m << endl;
                break;
            }
        }
    }
}