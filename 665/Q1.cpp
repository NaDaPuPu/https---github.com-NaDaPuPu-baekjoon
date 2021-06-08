#include <iostream>
#include <string>

using namespace std;

int t, px, py;
bool able_x, able_y;
string str;

int main() {
    cin >> t;

    while (t > 0)
    {
        able_x = false;
        able_y = false;
        int u = 0, d = 0, l = 0, r = 0;
        cin >> px >> py;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'U')
            {
                u++;
            } else if (str[i] == 'D')
            {
                d--;
            } else if (str[i] == 'L')
            {
                l--;
            } else if (str[i] == 'R')
            {
                r++;
            }
        }

        if (px >= 0 && px <= r || px < 0 && px >= l)
        {
            able_x = true;
        }

        if (py >= 0 && py <= u || py < 0 && py >= d)
        {
            able_y = true;
        }
        
        if (able_x && able_y)
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        t--;
    }
    
    return 0;
}