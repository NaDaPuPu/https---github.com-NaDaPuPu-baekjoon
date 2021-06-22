#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, cnt = 0, start = 666;
    cin >> n;

    while (true)
    {
        int temp = start;
        while (temp >= 666)
        {
            if (temp % 1000 == 666)
            {
                cnt++;
                break;
            }
            temp /= 10;
        }
        if (cnt == n) break;
        
        start++;
    }
    
    cout << start;

    return 0;
}