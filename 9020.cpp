#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num == 1) return false;
    else {
        for (int i = 2; i <= num; i++)
        {
            if (num % i == 0 && i != num)
            {
                return false;
            }
            
            if (i == num)
            {
                return true;
            }
        }
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t, n;

    cin >> t;

    while (t > 0)
    {
        cin >> n;

        for (int i = 0; i <= n / 2; i++)
        {
            if (isPrime((n / 2) - i) && isPrime((n / 2) + i))
            {
                cout << (n / 2) - i << ' ' << (n / 2) + i << "\n";
                break;
            }
        }

        t--;
    }
}