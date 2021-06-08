#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char exp[50];
    scanf("%s", exp);

    int ans = 0, i = 0;
    char *sArr[50] = { NULL, };
    char *ptr = strtok(exp, "-");

    while (ptr != NULL)
    {
        sArr[i] = ptr;
        i++;
        ptr = strtok(NULL, "-");
    }
    
    for (int i = 0; i < 50; i++)
    {
        char *ptr = strtok(sArr[i], "+");
        while (ptr != NULL)
        {
            int num = atoi(ptr);
            if (i == 0) {
                ans += num;
            }
            else {
                ans -= num;
            }
            ptr = strtok(NULL, "+");
        }
    }
    printf("%d", ans);

    return 0;
}