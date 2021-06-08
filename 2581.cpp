#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int m, n, sum = 0, min_num = 10001;

    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i == j)
            {
                sum += i;
                if (i < min_num)
                {
                    min_num = i;
                }
            }
            
            if (i % j == 0 && i != j)
            {
                break;
            }
        }
    }
    
    if (sum != 0)
    {
        cout << sum << "\n" << min_num << endl;
    } else {
        cout << "-1" << endl;
    }
    
    return 0;
}