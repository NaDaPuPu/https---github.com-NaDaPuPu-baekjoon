#include <stdio.h>
#include <memory.h>

#define INF 1000000

int weight[20000][20000];

int dist[20000] = {INF, };
int vert[20000];
int v, e, k;

int nextVertex(int n) {
    int i, min, minPos;
    min = 300000;
    minPos = -1;
    for (i = 0; i < n; i++)
    {
        if ((dist[i] < min) && !vert[i])
        {
            min = dist[i];
            minPos = i;
        }
    }
    return minPos;
} 

void Dijkstra(int start, int n) {
    int u;

    for (int i = 1; i < n; i++)
    {
        dist[i] = weight[start][i];
        vert[i] = 0;
    }

    vert[start] = 1;
    dist[start] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        u = nextVertex(n);
        vert[u] = 1;
        for (int w = 0; w < n; w++)
        {
            if (!vert[w])
                if (dist[u] + weight[u][w] < dist[w])
                    dist[w] = dist[u] + weight[u][w];
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        if (i > 1 && dist[i] == 0)
        {
            printf("INF\n");
        }
        else
        {
            printf("%d\n", dist[i]);
        }
    }
    
}

int main() {
    memset(weight, INF, sizeof(weight));

    scanf("%d %d", &v, &e);
    scanf("%d", &k);

    for (int i = 0; i < e; i++)
    {
        int st, en, we;
        scanf("%d %d %d", &st, &en, &we);
        weight[st][en] = we;
    }
    
    Dijkstra(k, v);

    return 0;
}