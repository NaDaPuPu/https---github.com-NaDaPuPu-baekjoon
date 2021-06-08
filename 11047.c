#include <stdio.h>

int main(void) {
    int n ,k, arr_N[10], num = 0;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {   
        scanf("%d", &arr_N[i]);
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        num += (k / arr_N[i]);
        k %= arr_N[i];
    }
    printf("%d", num);
}