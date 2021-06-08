#include <stdio.h>
#include <string.h>

int main(void) {
    int T, R;
    char S[21];
    scanf("%d", &T); // 1 <= T <= 1000
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &R);
        scanf("%s", S);
        for (int i = 0; i < strlen(S); i++)
        {
            for (int j = 0; j < R; j++)
            {
                if (S[i] != 0) {
                    printf("%c", S[i]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}