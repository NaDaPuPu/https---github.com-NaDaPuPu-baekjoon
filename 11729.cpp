#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int num, int start, int middle, int end) {
    if (num == 1) cout << start << ' ' << end << "\n";
    else {
        hanoi(num - 1, start, end, middle);
        cout << start << ' ' << end << "\n";
        hanoi(num - 1, middle, start, end);
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    cout << int(pow(2, n)) - 1 << "\n";
    hanoi(n, 1, 2, 3);

    return 0;
}