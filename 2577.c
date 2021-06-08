#include <stdio.h>

int main(void) {
    int numArr[10] = { 0, };
    int num, index, result = 1;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &num);
        result *= num;
    }

    while (result > 0)
    {
        index = result % 10;
        numArr[index] += 1;
        result /= 10;
    }
    
    for (int i = 0; i < sizeof(numArr) / sizeof(numArr[0]); i++)
    {
        printf("%d\n", numArr[i]);
    }
}