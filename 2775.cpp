#include <iostream>

using namespace std;

int roomNum(int floor, int num) {
    if (num == 1) return 1;
    if (floor == 0) return num;
    return (roomNum(floor - 1, num) + roomNum(floor, num - 1));
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t, k, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> k >> n;
        cout << roomNum(k, n) << endl;
    }

    return 0;   
}