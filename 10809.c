#include <stdio.h>

int main(void) {
    char cNum[100] = {0, };

    scanf("%s", cNum);
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (cNum[j] == i + 97)
            {
                printf("%d ", j);
                break;
            } else if (j == 99)
            {
                printf("-1 ");
            }
        }
    }

    return 0;
}