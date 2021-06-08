#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t, h, w, n, floor, number;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;
        number = n / h;
        floor = n % h;

        if (floor > 0) number++;
        else floor = h;

        cout << floor * 100 + number << endl;
    }
    
    return 0;
}