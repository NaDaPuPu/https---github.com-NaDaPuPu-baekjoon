#include <stdio.h>

int d();

int main(void) {
    d();
    return 0;
}

int d() {
    int numArr[10000] = {0, };

    for (int i = 1; i <= 10000; i++)
    {
        int sum = i;
        int result = i;

        while (result > 0)
        {
            sum += (result % 10);
            result /= 10;
        }

        if (sum > 0 && sum <= 10000)
        {
            numArr[sum - 1] = 1;
        }
    }

    for (int i = 0; i < 10000; i++)
    {
        if (numArr[i] != 1)
        {
            printf("%d\n", i + 1);
        }
    }
    return 0;
}