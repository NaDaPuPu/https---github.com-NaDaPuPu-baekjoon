#include <stdio.h>

int t, n;
long long dp[101] = {0, 1, 1, 1};

long long p(int n) {
    if (dp[n])
    {
        return dp[n];
    }
    return dp[n] = p(n - 2) + p(n - 3);
}

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("%lld\n", p(n));
    }

    return 0;
}