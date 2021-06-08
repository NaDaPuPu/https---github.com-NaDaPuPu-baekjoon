#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int num[8];
int result[8];
bool visited[8];

void DFS(int idx) {
    if (idx == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << result[i] << " ";
        }
        cout << "\n";

        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            result[idx] = num[i];
            DFS(idx + 1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    
    sort(num, num + n);

    DFS(0);

    return 0;
}