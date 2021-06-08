#include <iostream>
#include <vector>

using namespace std;

vector<int> root;

int find(int node) {
    if (root[node] == node) return node;
    return root[node] = find(root[node]);
}

void merge(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) return;
    root[b] = a;
}

int n, m;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n >> m;

    for (int i = 0; i <= n; i++)
    {
        root.push_back(i);
    }
    
    int oper, a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> oper >> a >> b;
        if (oper == 0)
        {
            merge(a, b);
        }
        else {
            if (find(a) == find(b))
            {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}