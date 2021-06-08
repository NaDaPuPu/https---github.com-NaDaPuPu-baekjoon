#include <iostream>

using namespace std;

int m, n;
int result[7];

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
    
    for (int i = 1; i <= n; i++)
    {
        result[idx] = i;
        DFS(idx + 1);
    }
}

int main() {
    cin >> n >> m;
    DFS(0);

    return 0;
}