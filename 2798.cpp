#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m, min = 300001, sum = 0, result;

    cin >> n >> m;
    int card_n[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> card_n[i];
    }
    
    for (int i = 0; i < n - 2; i++) // 1번째부터 n - 2까지의 카드
    {
        for (int j = i + 1; j < n - 1; j++) // 2번째부터 n - 1까지의 카드
        {
            for (int k = j + 1; k < n; k++) // 3번째부터 n까지의 카드
            {
                sum = card_n[i] + card_n[j] + card_n[k];
                if (m - sum < min && sum <= m)
                {
                    min = m - sum;
                    result = sum;
                }
            }
        }
    }

    cout << result;

    return 0;
}