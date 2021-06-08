#include <stdio.h>

int d(int n) {
    if (n < 100) {
        return n;
    } else {
        int count = 0;
        for (int i = 100; i <= n; i++)
        {
            int index[3];
            int result = i, j = 0;
            while (result > 0 && result < 1000)
            {
                index[j] = result % 10;
                result /= 10;
                j++;
            }

            if ((index[2] - index[1]) == (index[1] - index[0]) && i < 1000)
            {
                count++;
            }
        }
        return (99 + count);
    }
}

int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d", d(num));
}