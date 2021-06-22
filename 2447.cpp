#include <iostream>

using namespace std;

void pattern(int x, int y, int num) {
    if ((x / num) % 3 == 1 && (y / num) % 3 == 1)
    {
        cout << ' ';
    } else {
        if (num / 3 == 0)
        {
            cout << '*';
        } else {
            pattern(x, y, num / 3);
        }
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            pattern(i, j, n);
        }
        cout << "\n";
    }

    return 0;
}