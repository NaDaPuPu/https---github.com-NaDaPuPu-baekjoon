#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int x;

    cin >> x;

    int index = 0;
    int i;

    for (i = 0; index + i < x; i++)
    {
        index += i;
    }
    int diff = x - index;

    if (i % 2 == 0)
    {
        cout << diff << "/" << i - (diff - 1) << endl;
    } else {
        cout << i - (diff - 1) << "/" << diff << endl;
    }
    
    return 0;
}