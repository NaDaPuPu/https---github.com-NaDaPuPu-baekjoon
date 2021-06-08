#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 > num2)
        return 1;
    else if(num1 < num2)
        return -1;
    else
        return 0;
}

int main(void) {
    int n;
    int pin[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pin[i]);
    }
    
    qsort(pin, n, sizeof(int), compare);

    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (pin[i] > min + 1)   // 현재까지 측정 가능한 최대 무게 + 1보다 크다면
        {
            break;              // 반복문 종료(측정할 수 없는 최솟값 : min + 1)
        }
        min += pin[i];          // 아니라면 0 ~ (min + pin[i])까지 계산 가능
    }
    
    printf("%d", min + 1);
}