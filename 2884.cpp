#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int h, m;

    cin >> h >> m;

    if (m >= 45)
    {
        m -= 45;
    } else {
        int temp = 45 - m;
        m = 60 - temp;
        if (h > 0)
        {
            h -= 1;
        } else {
            h = 23;
        }
    }
    
    cout << h << " " << m << endl;

    return 0;
}