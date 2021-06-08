#include <stdio.h>

int graph[1001][1001] = {0, };
int DFS_visit[1001] = {0, };
int BFS_visit[1001] = {0, };
int queue[1001];

void DFS(int v, int n) {
    int i;

    DFS_visit[v] = 1;
    printf("%d ", v);
    for (i = 1; i <= n; i++) {
        if (graph[v][i] == 1 && DFS_visit[i] == 0) {
            DFS(i, n);
        }
    }

    return;
}

void BFS(int v, int n) {
    int front = 0, rear = 0, pop, i;

    printf("%d ", v);
    queue[0] = v;
    rear++;
    BFS_visit[v] = 1;

    while (front < rear) {
        pop = queue[front];
        front++;

        for (i = 1; i <= n; i++) {
            if (graph[pop][i] == 1 && BFS_visit[i] == 0) {
                printf("%d ", i);
                queue[rear] = i;
                rear++;
                BFS_visit[i] = 1;
            }
        }
    }
    
    return;
}

int main() {
    int n, m, start;
    int i, x, y;

    scanf("%d%d%d", &n, &m, &start);

    for (i = 0; i < m; i++) {
        scanf("%d%d", &x, &y);
        graph[x][y] = 1;
        graph[y][x] = 1;
    }
    
    DFS(start, n);
    printf("\n");
    BFS(start, n);

    return 0;
}