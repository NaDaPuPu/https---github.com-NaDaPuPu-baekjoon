#include <stdio.h>

int cost[3];
int dp[1001][3] = {0, };

int Min(int a, int b) {
    return a < b ? a : b;
}

void RGB(int n) {
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d %d", &cost[0], &cost[1], &cost[2]);
        dp[i][0] = Min(dp[i - 1][1], dp[i - 1][2]) + cost[0];
        dp[i][1] = Min(dp[i - 1][0], dp[i - 1][2]) + cost[1];
        dp[i][2] = Min(dp[i - 1][0], dp[i - 1][1]) + cost[2];
    }
    int min =  Min(Min(dp[n][0], dp[n][1]), dp[n][2]);
    printf("%d", min);
}

int main() {
    int n;
    scanf("%d", &n);
    RGB(n);

    return 0;
}