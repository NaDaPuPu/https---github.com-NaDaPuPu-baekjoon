#include <stdio.h>

int dp[1001] = {0, };
int input[1001];
int max = 0;
int n;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &input[i]);
        for (int j = 0; j < i; j++)
        {
            if (input[i] > input[j])
            {
                if (dp[j] >= dp[i])
                {
                    dp[i] = dp[j] + 1;
                    if (dp[i] >= max)
                    {
                        max = dp[i];
                    }
                }
            }
        }
    }
    printf("%d", max);

    return 0;
}