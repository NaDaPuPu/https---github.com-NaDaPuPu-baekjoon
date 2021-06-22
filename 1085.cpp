#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int x, y, w, h;

    cin >> x >> y >> w >> h;

    cout << min(min(x, w - x), min(y, h - y)) << "\n";

    return 0;
}