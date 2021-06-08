#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int T;
    int x, y, result;

    cin >> T;

    for (int t = 0; t < T; t++)
    {
        cin >> x >> y;
        
        double i;
        for (i = 1;; i++)
        {
            if (y - x < i * i) {
                break;
            }
        }

        if (y - x == (i - 1) * (i - 1))
        {
            result = 2 * (i - 1) - 1;
        } else if (y - x < ((i - 1) * (i - 1) + i * i) / 2) {
            result = 2 * (i - 1);
        } else {
            result = 2 * i - 1;
        }

        cout << result << endl;
    }
    
    return 0;
}