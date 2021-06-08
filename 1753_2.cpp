#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

#define INF 100000000

int v, e, k;

vector<pair<int, int>> graph[20001]; // pair 구조를 이용한 벡터

vector<int> dijkstra(int start, int vert) { // 출력이 벡터인 함수
    vector<int> dist(vert, INF); // 정점의 개수만큼의 원소를 가진 벡터를 INF로 초기화
    dist[start] = 0; // 시작점의 거리는 0

    priority_queue<pair<int, int>> pq; // Weight, Vertex (가중치, 정점)
    pq.push(make_pair(0, start));

    while (!pq.empty())
    {
        int weight = -pq.top().first;
        int current = pq.top().second;
        pq.pop();

        if (dist[current] < weight) continue;
        
        for (int i = 0; i < graph[current].size(); i++)
        {
            int nei = graph[current][i].first;
            int neiDist = weight + graph[current][i].second;

            if (dist[nei] > neiDist)
            {
                dist[nei] = neiDist;
                pq.push(make_pair(-neiDist, nei));
            }
        }
    }
    return dist;
}

int main() {
    scanf("%d %d", &v, &e);
    scanf("%d", &k);

    v++;

    for (int i = 0; i < e; i++)
    {
        int st, ed, wei;
        scanf("%d %d %d", &st, &ed, &wei);

        graph[st].push_back(make_pair(ed, wei));
    }

    vector <int> result = dijkstra(k, v);

    for (int i = 1; i < v; i++)
    {
        if (result[i] == INF)
            printf("INF\n");
        else
            printf("%d\n", result[i]);
    }

    return 0;
}