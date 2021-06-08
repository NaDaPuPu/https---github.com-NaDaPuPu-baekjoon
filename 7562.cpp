#include <stdio.h>
#include <queue>
#include <cstring>

using namespace std;

int t, l;
int x, y, cx, cy, ax, ay; // current, arrive
int dx[8] = { -2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = { -1, 1, -2, 2, -2, 2, -1, 1};
int d[300][300];
bool visited[300][300];

queue<pair<int, int>> q;

void bfs(int x, int y) {
    q.push(make_pair(x, y));
    visited[x][y] = true;
    while (!q.empty()) // 큐가 빌 때까지
    {
        x = q.front().first; // 큐 q의 가장 앞의 원소 반환(pair 중 x)
        y = q.front().second; // 큐 q의 가장 앞의 원소 반환(pair 중 y)
        q.pop();                // 큐 q의 가장 앞의 원소 삭제

        if (x == ax && y == ay) // 목적지 도착 시
        {
            printf("%d\n", d[x][y]); // 이동한 횟수 출력

            while (!q.empty())
            {
                q.pop(); // 큐 q 비우기
            }
            break;
        }
        
        for (int i = 0; i < 8; i++) // 
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < l && ny >= 0 && ny < l) // 이동한 위치가 체스판 안에 위치할 경우
            {
                if (visited[nx][ny] == false) // 이동하지 않았던 위치일 경우
                {
                    visited[nx][ny] = true; // 이동한 위치 체크
                    d[nx][ny] = d[x][y] + 1; // 이동 횟수 추가
                    q.push(make_pair(nx, ny)); // 큐에 입력
                }
            }
        }
    }
}

int main(void) {
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &l);
        scanf("%d %d", &cx, &cy);
        scanf("%d %d", &ax, &ay);
        bfs(cx, cy);
        for (int j = 0; j < 300; j++) // 배열 초기화
        {
            for (int k = 0; k < 300; k++)
            {
                d[j][k] = 0;
                visited[j][k] = false;
            }
        }
    }
}