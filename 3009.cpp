#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int x[3];
    int y[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }
    
    if (x[0] == x[1])
    {
        cout << x[2] << ' ';
    } else if (x[0] == x[2])
    {
        cout << x[1] << ' ';
    } else {
        cout << x[0] << ' ';
    }
    
    if (y[0] == y[1])
    {
        cout << y[2];
    } else if (y[0] == y[2])
    {
        cout << y[1];
    } else {
        cout << y[0];
    }
}