#include <stdio.h>

int f[41];

int fibonacci(int n) {
    if (f[n])
        return f[n];

    if (n < 2) {
        return f[n] = n;
    } else {
        return f[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(void) {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int num;
        scanf("%d", &num);
        fibonacci(num);
        if (num == 0)
            printf("1 %d\n", f[num]);
        else
            printf("%d %d\n", f[num - 1], f[num]);
    }
}