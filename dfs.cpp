#include <iostream>
#include <vector>

using namespace std;

int number = 9;
int visit[9];
vector<int> a[10];

void dfs(int start) {
    if (visit[start])
    {
        // 방문했냐?
        return; // 나가라
    }
    
    visit[start] = true; // 방문 도장
    cout << start;


    for (int i = 0; i < a[start].size(); i++)
    {
        // 인접 노드 방문
        int x = a[start][i];
        dfs(x);
    }
}

int main() {
    a[1].push_back(2);
    a[2].push_back(1);

    a[1].push_back(3);
    a[3].push_back(1);

    a[2].push_back(3);
    a[3].push_back(2);

    a[2].push_back(4);
    a[4].push_back(2);

    a[2].push_back(5);
    a[5].push_back(2);

    a[4].push_back(8);
    a[8].push_back(4);

    a[5].push_back(9);
    a[9].push_back(5);

    a[3].push_back(6);
    a[6].push_back(3);

    a[3].push_back(7);
    a[7].push_back(3);

    dfs(1);

    return 0;
}