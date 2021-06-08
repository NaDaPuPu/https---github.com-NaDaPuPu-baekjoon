#include <iostream>
#include <algorithm>

using namespace std;

int t, n;
int a[30000];
int c[3] = {0, };

void recur() {

}

int main() {
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int num = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            c[a[j] % 3]++;
        }

        while (!(c[0] == c[1] && c[1] == c[2]))
        {
            for (int j = 0; j < n; j++)
            {
                int index;
                for (int k = 0; k < 3; k++)
                {
                    if (c[k] == max(max(c[0], c[1]), c[2]))
                    {
                        index = k;
                        break;
                    }
                }
                
                if (a[j] % 3 == index)
                {
                    c[a[j] % 3]--;
                    a[j]++;
                    c[a[j] % 3]++;
                    num++;
                    break;
                }
            }
        }

        cout << num << "\n";
    }

    return 0;
}