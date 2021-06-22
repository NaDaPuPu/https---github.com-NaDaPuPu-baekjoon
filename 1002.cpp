#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    int t;
    int x1, x2, y1, y2, r1 ,r2;

    cin >> t;

    while (t > 0)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        int dist = pow((x1 - x2), 2) + pow((y1 - y2), 2);

        int pow1 = pow((r1 - r2), 2);
        int pow2 = pow((r1 + r2), 2);

        if (dist == 0)
        {
            if (pow1 == 0)
            {
                cout << -1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else {
            if (dist == pow2 || dist == pow1)
            {
                cout << 1 << "\n";
            } else if (dist > pow1 && dist < pow2) {
                cout << 2 << "\n";
            } else {
                cout << 0 << "\n";
            }
        }

        t--;
    }

    return 0;
}