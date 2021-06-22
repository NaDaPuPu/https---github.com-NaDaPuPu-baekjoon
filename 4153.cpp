#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x, y, z;

    while(true) {
        cin >> x >> y >> z;
        if (x == 0 && y == 0 && z == 0)
        {
            break;
        }

        int hype = max(max(x, y), z);

        if (hype * hype * 2 == x * x + y * y + z * z) {
            cout << "right" << "\n";
        } else {
            cout << "wrong" << "\n";
        }
    }

    return 0;
}