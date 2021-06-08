#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int a, b, c, amount;

    cin >> a >> b >> c;

    if (c > b)
    {
        amount = a / (c - b) + 1;
    } else amount = -1;

    cout << amount << endl;

    return 0;
}