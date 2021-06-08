#include <iostream>

using namespace std;

int n, m;
int result[9];
int visited[9] = {0, };

void DFS(int a) {
    if (a == m + 1)
    {
        for (int i = 1; i <= m; i++)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            result[a] = i;
            DFS(a + 1);
            visited[i] = 0;
        }
    }
}

int main() {
    cin >> n >> m;
    DFS(1);
}