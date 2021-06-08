#include <stdio.h>

int dp[1000001];

int f(int n) {
    if (dp[n])
        return dp[n];
  
    if (n == 0)
        return dp[0] = 0;
    else if (n == 1)
        return dp[1] = 1;
    else if (n == 2)
        return dp[2] = 2;
    else {
        dp[n] = f(n - 1) + f(n - 2);
        return dp[n] %= 15746;
    }    
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
}