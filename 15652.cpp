#include <iostream>

using namespace std;

int m, n;
int result[8];

void DFS(int idx, int temp) {
    if (idx == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << result[i] << " ";
        }
        cout << "\n";

        return;
    }
    
    for (int i = temp; i <= n; i++)
    {
        result[idx] = i;
        DFS(idx + 1, i);
    }
}

int main() {
    cin >> n >> m;
    DFS(0, 1);

    return 0;
}