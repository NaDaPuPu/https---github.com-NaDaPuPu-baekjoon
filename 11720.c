#include <stdio.h>

int main(void) {
    int num, sum = 0;
    scanf("%d", &num);
    char cNum[num];
    scanf("%s", cNum);  

    for (int i = 0; i < num; i++)
    {
        sum += cNum[i] - '0';
    }
    
    printf("%d", sum);

    return 0;
}