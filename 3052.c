#include <stdio.h>

int main(void) {
    int numArr[10];
    int num, index = 0, diff = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        numArr[i] = num % 42;

        for (int j = 0; j < i; j++)
        {
            if (numArr[i] == numArr[j])
            {
                index++;
            }
        }

        if (index == 0)
        {
            diff++;
        }
        index = 0;
    }
    printf("%d", diff);
}