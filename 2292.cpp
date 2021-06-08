#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;

    cin >> n;

    int i = 1;
    for (int s = 2; s <= n; i++)
    {
        s += 6 * i;
    }
    
    cout << i << endl;
    
    return 0;
}