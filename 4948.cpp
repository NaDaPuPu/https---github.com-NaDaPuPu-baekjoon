#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, result, max = 0;
    vector<int> input_num;

    while (true)
    {
        cin >> n;
        if (n == 0) break;
        if (max < n) max = n;
        input_num.push_back(n);
    }
    
    bool prime[2 * max + 1];
    fill_n(prime, 2 * max + 1, 1);
    prime[0] = false; // 0
    prime[1] = false; // 1

    for (int i = 2; i * i <= 2 * max; i++)
    {
        if (prime[i])
        {
            for (int j = 2 * i; j <= 2 * max; j += i)
            {
                prime[j] = false;
            }
        }
    }
    
    for (int i = 0; i < input_num.size(); i++)
    {
        result = 0;
        for (int j = input_num[i] + 1; j <= 2 * input_num[i]; j++)
        {
            if (prime[j])
            {
                result++;
            }
        }
        cout << result << "\n";
    }

    return 0;
}