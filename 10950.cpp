#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int a, b, t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
    
    return 0;
}