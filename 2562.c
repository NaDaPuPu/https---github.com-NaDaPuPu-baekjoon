#include <stdio.h>

int main(void) {
    int numArr[9];
    int max = 0;
    int num;
    for (int i = 0; i < sizeof(numArr) / sizeof(numArr[0]); i++)
    {
        scanf("%d", &numArr[i]);
        
        if (numArr[i] > max)
        {
            max = numArr[i];
            num = i + 1;
        }
    }
    printf("%d\n%d", max, num);
}