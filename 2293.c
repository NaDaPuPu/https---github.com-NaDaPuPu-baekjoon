#include <stdio.h>

int main(void) {
    int n, k;
    int coin[101];
    int dp[10001] = {0, };

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &coin[i]);
    }
    
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k ; j++)
        {
            if (j >= coin[i])
            {
                dp[j] += dp[j - coin[i]]; // 점화식
            }
        }
    }

    printf("%d\n", dp[k]);
}