#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    int x, y; // x, y는 모두 양수 or 음수

    cin >> x >> y;
    
    if (x > 0 && y > 0)
    {
        cout << "1" << endl;
        
    } else if (x < 0 && y > 0)
    {
        cout << "2" << endl;
    } else if (x < 0 && y < 0)
    {
        cout << "3" << endl;
    } else if (x > 0 && y < 0)
    {
        cout << "4" << endl;
    }
    
    return 0;
}