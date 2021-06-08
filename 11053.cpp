#include <iostream>

using namespace std;

int arr[1000];
int dp[1000];

int main(void) {
    int n, max = -1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1)
            {   
                dp[i] = dp[j] + 1;
            }
        }
        if (max < dp[i])
        {
            max = dp[i];
        }
    }
    cout << max;

    return 0;
}