#include <stdio.h>

int t, m, n, k, x, y, i, j;
int cab[50][50] = {0, };
int BFS_visit[50];

int main() {
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d %d", &m, &n, &k);
        for (j = 0; j < k; j++)
        {
            scanf("%d %d", &x, &y);
            cab[x][y] = 1;
        }
        
    }
    return 0;
}