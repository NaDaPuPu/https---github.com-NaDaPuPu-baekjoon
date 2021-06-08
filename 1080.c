#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr_A[n][m], arr_B[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%1d", &arr_A[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%1d", &arr_B[i][j]);
        }
    }
    
    int min = 0;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < m - 2; j++)
        {
            if (arr_A[i][j] != arr_B[i][j])
            {
                for (int k = i; k <= i + 2; k++)
                {
                    for (int l = j; l <= j + 2; l++)
                    {
                        if (arr_A[k][l] == 0)
                            arr_A[k][l] = 1;
                        else if (arr_A[k][l] == 1)
                            arr_A[k][l] = 0;
                    }
                }
                min++;
            }
        }
    }
    
    int num = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr_A[i][j] == arr_B[i][j])
            {
                num++;
            }
        }
    }
    printf("%d", num == sizeof(arr_B) / sizeof(int) ? min : -1);
}