#include <iostream>
#include <vector>

using namespace std;

int n, q, k, l, r;
vector<int> arr;

int main() {
    arr.push_back(0);
    cin >> n >> q >> k;
    for (int i = 1; i <= n; i++)
    {
        int asdf;
        cin >> asdf;
        arr.push_back(asdf);
    }
    
    for (int i = 0; i < q; i++)
    {
        int num = 0;
        cin >> l >> r;
        for (int i = arr[l] + 1; i <= k; i++)
        {
            if (i != arr[r])
            {
                num++;
            }
        }

        for (int i = arr[r] - 1; i > 0; i--)
        {
            if (i != arr[l])
            {
                num++;
            }
        }

        cout << num << "\n";
    }

    return 0;
}