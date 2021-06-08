#include <iostream>

using namespace std;

long long t, n, k;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        if (n >= k) {
            if (n % k == 0) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        } else if (n < k)
        {
            cout << ((k - 1) / n) + 1 << endl;
        }
    }

    return 0;
}