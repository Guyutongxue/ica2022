#include <iostream>
using namespace std;

int f(int m, int n) {
    if (m <= 1 || n <= 1)
        return 1;
    else if (m < n)
        return f(m, m);
    else
        return f(m, n - 1) + f(m - n, n);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        cout << f(m, n) << endl;
    }
}