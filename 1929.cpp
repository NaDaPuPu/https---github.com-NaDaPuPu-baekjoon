#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int m, n;

    cin >> m >> n;

    bool prime[n + 1];
    fill_n(prime, n + 1, 1);
    prime[0] = false; // 0
    prime[1] = false; // 1

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (prime[i] == true)
        {
            cout << i << "\n";
        }
    }

    return 0;
}