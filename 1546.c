#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    float numArr[num], sum = 0, max = 0;
    
    for (int i = 0; i < sizeof(numArr) / sizeof(numArr[0]); i++)
    {
        scanf("%f", &numArr[i]);
        if(numArr[i] > max) {
            max = numArr[i];
        }
    }
    
    for (int i = 0; i < sizeof(numArr) / sizeof(numArr[0]); i++)
    {
        numArr[i] = numArr[i] / max * 100;
        sum += numArr[i];
    }

    printf("%f", sum / (sizeof(numArr) / sizeof(numArr[0])));
}